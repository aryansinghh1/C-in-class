

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if ((rear + 1) % SIZE == front)
    {
        cout<< "Queue Overflow"<<endl;
        return 0;
    }
    
    if(front == -1)
    {
        front = 0;
    }
    rear = (rear + 1) % SIZE;
    queue[rear] = value;
    cout<<"Enqueued value: "<<value<<endl;
    
}

void dequeue ()
{
     if (front == -1)
    {
        cout<<"Queue Underflow."<<endl;
        return;
    }
    cout<<"Dequeued value: "<<queue[front]<<endl;
    
    if (front == rear){
        front = rear = -1;
        
    }
    else
    {
        front = (front + 1) % SIZE;
    }
}
void display()
{
    if (front == -1)
    {
        cout<<"Queue is empty."<<endl;
        return;
    }
    cout<<"Current queue: ";
    int i = front;
    while (true){
        cout<<queue[i]<<" ";
        if (i == rear)
        {
            break;
        }
        i = (i + 1) % SIZE;
    }
    cout<<endl;
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