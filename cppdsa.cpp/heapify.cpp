#include <iostream>
using namespace std;
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void minheapify(int heap[],int size,int i){
    int smallest = i;

    int left = 2*i+1;
    int right = 2*i+2;
    if (left<size && heap[left]<<heap[smallest]){
        smallest = left;

    }
    if (right<size && heap[right]<<heap[smallest]){
        smallest = right;
        if (smallest != i){
            swap(&heap[i],&heap[smallest]);
            minheapify(heap,size,smallest);
        }
    }
}
void deleteroot(int heap[],int &size){
    if (size <= 0){
        cout<<"heap is empty"<<endl;
        return;
    }
    if (size == 1){
        size--;
        return;
    }
    heap[0]=heap[size-1];
    size--;
    minheapify(heap,size,0);
}

void insertminheap(int heap[],&size, int value){
    heap[size]= value;
    size++;
    int i = size-1;
    while(i!=0 && heap[(i-1)/2]>heap[i]){
        swap(&heap[i],&heap[(i-1/2)]);
        i = (i-1)/2;
    }
}
void printheap(int heap[],int size){
    cout<<"heap elements: ";
    for (int i = 0;i<size; i++){
        cout<<heap[i]<<" ";

    }
    cout<<endl;
}
int main (){
    int n;
    cin>>n;
    int heap[100];
    int size = 0;
    for ( int i = 0;i<n;i++){
        int value;
        cin>>value;
        intsertminheap(heap,size,value);

    }
    printheap(heap,size);
}