#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 class Node
 {
 public:
    int value;
    Node* Next;
 };
 void printList(Node*n)
 {
    while(n!=NULL)
    {
        cout<<n->value<<endl;
        n=n->Next;
    }

 }
 void insertAtTheFront(Node**head, int newValue)
 {
    //prepare a new node
    Node * newNode = new Node();
    newNode->value = newValue;
    //put it in front of current head
    newNode->Next = *head;
    //move head of the list to point to the new node 
    *head = newNode;

 }
 void insertAtTheend(Node**head, int newValue)
 {
    //prepare a new node
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->Next =NULL;
    //if linked list is empty,new node will be a head node
    if(*head == NULL)
    {
        *head =newNode;
        return;
    }
    //find the last node
    Node* last = *head;
    while (last->Next!=NULL)
    {
        /* code */
        last = last->Next;
    }
    //insert new node after last node
    last->Next = newNode;
 }

 void insertAfter(Node*previous , int newValue)
 {
    //check if previous node is null
    if(previous == NULL)
    {
        cout<<"Previous can not be NULL"<<endl;
        return;
    }
    //prepare a newNode
    Node* newNode = new Node();
    newNode->value = newValue;
    //Insert new node after previous
    newNode->Next = previous->Next;
    previous->Next = newNode;

 }
signed main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value =1;
    head->Next = second;
    second->value =2;
    second->Next = third;
    third->value =3;
    third->Next = NULL;

    insertAfter(head,-1);
    insertAfter(second,-2);

    printList(head);



return 0;
}