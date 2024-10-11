#include <iostream>
using namespace std;

const int SIZE = 5; // Define the size of the queue
int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if ((rear + 1) % SIZE == front) {
        cout << "Queue Overflow" << endl;
        return;
    }
    
    if (front == -1) {
        front = 0; // Initialize front if queue is empty
    }
    
    rear = (rear + 1) % SIZE; // Move rear to the next position
    queue[rear] = value; // Add new element
    cout << "Enqueued value: " << value << endl;
}

void dequeue() {
    if (front == -1) {
        cout << "Queue Underflow." << endl;
        return;
    }
    
    cout << "Dequeued value: " << queue[front] << endl;

    if (front == rear) {
        // If the queue becomes empty
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE; // Move front to the next position
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Current queue: ";
    int i = front;
    while (true) {
        cout << queue[i] << " ";
        if (i == rear) {
            break; // Stop when we reach the rear
        }
        i = (i + 1) % SIZE; // Move to the next position
    }
    cout << endl;
}

int main() {
    int choice, value;
    
    while (true) {
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter again." << endl;
        }
    }

    return 0;
}
