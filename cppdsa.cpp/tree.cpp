#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

struct node* CreateBST(struct node* root, int data){
    if (root == nullptr){
        node* newNode = new node();
        newNode->data = data;
        newNode->left = newNode->right=nullptr;
        return newNode;
    }

    if (data < root->data){
        root->left = CreateBST(root->left,data);
    }
    else{
        root->right = CreateBST(root->right,data);
    }

    return root;
}

struct node* findmin(struct node* root){
    while (root->left != nullptr)
    {
        root = root->left;
    }
    return root;
}

struct node* deleteNode(struct node* root, int key){
    if(root == nullptr){
        return root;
    }
}

if (key < root->data){
    root->left=deleteNode(root->left,key);
}
else if(key > root->data){
    root->right=deleteNode(root->right,key);

}
else{
    if(root->left == nullptr){
        struct node* temp = root->right;
        delete root;
        return temp;
    }
    else if(root->right == nullptr){
        struct node* temp = root->left;
        delete root;
        return temp;
    }

    struct node* temp = findMin(root->right);

    root->data = temp->data;

    root->right = deleteNode(root->right , temp->data);
}
return root;
