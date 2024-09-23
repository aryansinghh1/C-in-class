#include<iostream>
using namespace std;
#define MAX 5
int stack[MAX];
int top =-1;
void push(int value)
{
    if (top == MAX-1)
    {
        cout<<"Stack overflow"<<endl;
    }
    else{
        stack[++top]=value;
        cout<<"Element inserted: "<<value<<endl;
    }
}

int pop()
{
    if (top == -1)
    {
        cout<<"Underflow"<<endl;
        return -1;
    }
    return stack[top--];
}

int peek ()
{
    if (top == -1)
    {
        cout<<"Stack is empty"<<endl;
    }
    return stack[top];
}

void display()
{

    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack elements are: ";
        for (int i = 0; i <= top; i++)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}


int main()
{
    int choice, value;
    while(true)
    {
        cin>>choice;
        switch(choice)
        {
            case 1:
            cin>>value;
            push(value);
            break;
            case 2;
            pop();
            break;
            case 3;
            display();
            break;
            case 4;
            return 0;
            default:
            cout<<"Invalid choice";
        }
    }
    return 0;
}