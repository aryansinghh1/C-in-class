#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void insert_b(struct node **head_ref, int element)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=element;
    newnode->next=*head_ref;
    *head_ref=newnode;
}

void print_list(struct node *temp)
{
    while (temp != NULL)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }
}
int main()
{
    struct node *head = NULL;
    int n, element;

    scanf("%d",&n);
    for(int i = 1; i<=n;i++)
    {
        scanf("%d",&element);
        insert_b(&head,element);

    }
    print_list(head);
    
    return 0;
}