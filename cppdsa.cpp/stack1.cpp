#include<iostream>
using namespace std;
#define MAX 3
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

int main()
{
    push(10);
    push(10);
    pop();
    pop();
    pop();
    push(10);
    push(20);
    push(30);
    push(40);
    push(40);
    return 0;
}