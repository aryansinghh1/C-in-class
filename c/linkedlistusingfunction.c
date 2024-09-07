// You are using GCC
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    
};
void insert_b(struct node **head_ref, int new_data)
{
    struct node *new_node = (struct node*)malloc (sizeof(struct node));
    new_node->data = 10;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void print_list(struct node *temp)
{
    while (temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}
int main ()
{
    
    
    struct node *head = NULL;
    insert_b(&head,10)
    print_list(head)
    
    return 0;
}