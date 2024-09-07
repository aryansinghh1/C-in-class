// You are using GCC
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    
};
int main ()
{
    int n,data;
    scanf("%d",&n);
    struct node *head = NULL;
    for (int i = 1;i<=n; i++)
    {
        struct node *new_node = (struct node*)malloc (sizeof(struct node));
        scanf("%d",&data);
        new_node->data = data;
        new_node->next = head;
        head = new_node;
    
    }
    
    struct node *temp = head;
    while (temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
    printf("NULL");
    return 0;
}