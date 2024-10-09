// You are using GCC
#include<iostream>
using namespace std;
struct node {
    int data;
    node *next;
};
node *front = nullptr;
node *rear = nullptr;

void enqueue(int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = nullptr;
    if(rear == nullptr){
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
    cout<<"enqueued value: "<<value<<endl;
}

void dequeue()
{
    if(front == nullptr)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        node *temp = front;
        front = front->next;
        if(front == nullptr)
        {
            rear == nullptr;
        }
        cout<<"dequeued value: "<<temp->data<<endl;
        delete temp;
    }
}
void display()
{
    if (front == nullptr)
    {
        cout<<"Queue is empty";
    }
    else
    {
        node *temp = front;
        cout<<"Current Queue: ";
        while(temp!=nullptr)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    
    }
}
int main()
{
    int choice,value;
    while (true)
    {
        cin>>choice;
        switch(choice)
        {
            case 1:
            cin>>value;
            enqueue(value);
            break;
            
            case 2:
            dequeue();
            break;
            
            case 3:
            display();
            break;
            
            case 4:
            return 0;
            
            default:
            cout<<"Invalid choice";
            
        }
    }
}