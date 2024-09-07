#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    
};
int main ()
{
    struct node *head = NULL;
    struct node *new_node = (struct node*)malloc (sizeof(struct node));
    new_node->data = 30;
    new_node->next = head;
    head = new_node;
    
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = 20;
    new_node->next = head;
    head = new_node;
    
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = 30;
    new_node->next = head;
    head = new_node;
    
    struct node *temp = head;
    while (temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
    return 0;
}
