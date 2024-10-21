#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

};
Node* createNode(int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}
Node* insert(Node* root, int data){
    if(root == nullptr){
        return createNode(data);

    }
    if(data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right,data);
    }
    return root;
}
void inorderTraversal(Node* root){
    if (root ==  nullptr)
    {
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}
int main()
{
    Node* root = nullptr;

    root = insert(root,10);   
    root = insert(root,1);   
    root = insert(root,15);   
    root = insert(root,3);   
    root = insert(root,6);   
    root = insert(root,7);   
    root = insert(root,13);   
    root = insert(root,18);  

    cout<<"Inorder Traversal ";
    inorderTraversal(root);
    cout<<endl;
     
    return 0;
}