// You are using GCC
#include <iostream>
using namespace std;
void swap (int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void insertmaxheap(int heap[],int &size, int value){
    heap[size]=value;
    size++;
    int i = size-1;
    while(i!= 0 && heap[(i-1)/2]<heap[i]){
        swap(&heap[i],&heap[(i-1)/2]);
        i = (i-1)/2;
    }
}
void printheap (int heap[],int size){
    cout<<"heap elements: ";
    for (int i = 0 ; i<size;i++){
        cout<<heap[i];
    
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
        intsertmaxheap(heap,size,value);

    }
    printheap(heap,size);
}