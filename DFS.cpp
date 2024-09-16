#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node
{
    /* data */
    int data;
    Node* left;
    Node* right;
};
Node* createNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right =nullptr;
    return newNode;
}
//pre-order
// void printTree(Node* root)
// {
//     if (root == nullptr) return;
//     {
//         /* code */
//         cout<<root->data<<endl;
        
//         printTree(root->left);
//         printTree(root->right);
//     }
    
// }
//in-order
// void printTree(Node* root)
// {
//     if (root == nullptr) return;
//     {
//         /* code */
//         printTree(root->left);

//         cout<<root->data<<endl;
//         printTree(root->right);
//     }
    
// }
//post-order
void printTree(Node* root)
{
    if (root == nullptr) return;
    {
        /* code */
        printTree(root->left);
        printTree(root->right);

        cout<<root->data<<endl;
    }
    
}

signed main()
{
    //level 1
    Node* root = createNode(1);
    //level 2
    root->left = createNode(2);
    root->right = createNode(3);
    //level 3
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    //level 4
    root->left->right->left = createNode(9);
    root->right->right->left = createNode(15);

    printTree(root);
return 0;
}