// You are using GCC
#include<iostream>
using namespace std;
#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;
void enqueue(int value){
    if(rear==MAX-1)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        queue[++rear]=value;
        cout<<"Enqueued value: "<<value<<endl;
    }
}
void dequeue(){
    if (front == -1 || front>rear)
    {
        cout<<"Underflow "<<endl;
        
    }
    else
    {
        cout<<"dequeue value: "<<queue[front]<<endl;
        front++;
        if(front>rear){
            fornt=-1;
            rear = -1;
        }
    }
}
void display(){
    if(front == -1){
        cout<<"queue is empty"<<endl;
    }
    else
    {
        cout<<"Current queue: ";
        for(int i = front; i<=rear;i++)
        {
            cout<<queue[i]<<" ";
        }
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