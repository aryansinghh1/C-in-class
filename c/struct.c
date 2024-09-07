#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    head->data=10;
    head->next = NULL;
    
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));
    second->data=20;
    second->next = NULL;
    
    head->next = second;
    printf("%d",head->data);
    return 0;

}