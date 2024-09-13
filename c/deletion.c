// You are using GCC

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
    
};
void insert_end(struct node **head_ref, int element)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = element;
    newnode->next = NULL;
    
    if(*head_ref == NULL)
    {
        *head_ref = newnode;
        return;
    }
    else
    {
        struct node *temp = *head_ref;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        
    }
}
void delete_front(struct node **head_ref)
{
    if (*head_ref == NULL)
    {
        return;
    }
    else
    {
        struct node *temp = *head_ref;
        (*head_ref) = (*head_ref) -> next;
        free(temp)
    }
}
void print_list(struct node *temp)
{
    while(temp != NULL)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }
}
int main ()
{
    struct node *head = NULL;
    int n, element;
    
    scanf("%d",&n);
    for(int i = 1;i <= n;i++)
    {
        scanf ("%d",&element);
        insert_end(&head,element);
    }
    
    printf("List before deletion: ");
    print_list(&head);
    
    delete_front(&head);
    
    printf("List after deletion at front: ");
    print_list(head);
    
    return 0;
}