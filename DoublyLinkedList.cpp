#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Node{
public:
        int value;
        Node* next;
        Node* previous;    
};

void printForward(Node* head)
{
    Node* travarser = head;
    while (travarser!=nullptr)
    {
        /* code */
        cout<<travarser->value<<endl;
        travarser = travarser->next;
    }
    

}
void printBackward(Node* tail)
{
    Node* travarser = tail;
    while (travarser!=nullptr)
    {
        /* code */
        cout<<travarser->value<<endl;
        travarser = travarser->previous;
    }
    

} 
signed main()
{
    Node* head;
    Node* tail;
//add first node

    //create a new node
    Node* node = new Node();
    //node->value = 4
    node->value = 4;
    //node->next = nullptr
    node->next = nullptr;
    //node previous = nullptr
    node->previous = nullptr;
    //head = node
    //tail = node
    head = node;
    tail = node;
//add 2nd node
    node = new Node();
    node->value = 5;
    node->next = nullptr;
    node->previous = tail;
    tail->next = node;
    tail = node;
//add 3rd node
    node = new Node();
    node->value = 6;
    node->next = nullptr;
    node->previous = tail;
    tail->next = node;
    tail = node;
//add 4th node
    node = new Node();
    node->value = 7;
    node->next = nullptr;
    node->previous = tail;
    tail->next = node;
    tail = node;      

    printBackward(tail);    
return 0;
}