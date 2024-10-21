#include<iostream>
#include<stdlib.h>

using namespace std;

struct tnode
{
    int data;
    struct tnode *right;
    struct tnode *left;

};
struct tnode *CreateBST(struct tnode *,int);
void Inorder(struct tnode *);
void Preorder(struct tnode *);
void Postorder(struct tnode *);

int main()
{
    struct tnode *root = NULL;
    int choice, item,n,i;
    do
    {
        cin>>choice;
        switch (choice)
        {
        case 1:
            root = NULL;
            cin>>n;
            for(i = 1;i<=n;i++)
            {
                cin>>item;
                root = CreateBST(root,item);
            }
            break;
        case 2:
            cout<<"Inorder: ";
            Inorder(root);
            cout<<"\n";
            break;
        
        case 3:
            cout<<"Preorder: ";
            Preorder(root);
            cout<<"\n";
            break;

        case 4:
            cout<<"Postorder: ";
            Postorder(root);
            cout<<"\n";
            break;
        case 5:
            exit(0);
            break;
        default:
            break;
        }
    }
    return 0;
}
