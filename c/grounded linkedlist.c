#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct header
{
    int node_count;
    struct node *next;
    
};
void insert_at_beginning(struct header *header_ref, int value)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = header_ref->next;
    header_ref->next = newnode;
    header_ref->node_count++;

}
void print_list(struct header *header_ref)
{
    struct node *temp = header_ref->next;
    while (temp != NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->next;

    }
    printf("NULL\n");
}
int main ()
{
    struct header *head = (struct header*)malloc(sizeof(struct header));
    head->node_count = 0;
    head->next = NULL;
    int n, value;
    scanf("%d",&n);

    for (int i = 0;i < n; i++)
    {
        scanf("%d",&value);
        insert_at_beginning(head,value);
    }

    print_list(head);
    return 0;

}
