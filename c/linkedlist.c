#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct  node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head -> data = 10;
    head -> next = NULL;
    struct node *second = (struct node *)malloc(sizeof(struct node));
    second->data = 20;
    second->next = NULL;
    head -> next = second;
    struct node *third = (struct node *)malloc(sizeof(struct node));
    third -> data = 30;
    third -> next = NULL;
    second -> next = third;

    struct node *temp = head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp = temp ->next;
    }
    return 0;
}