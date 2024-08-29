#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    int size;
    printf("Enter the size of the linked list :");
    scanf("%d", &size);
    struct node *head;
    head = (struct Node *)malloc(sizeof(struct node));
    printf("Enter the list items:\n");
    printf("Enter the data for head:\n");
    scanf("%d", &(head->data));
    head->next = NULL;
    int i;
    struct node *p;
    p = head;

    for (i = 0; i < size; i++)
    {
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data for node%d:", i);
        scanf("%d", &(newnode->data));
        newnode->next = NULL;
        p ->next  = newnode ;
        p  =  p->next;

    }
    p = head ;
    while (p != NULL)
    {
        printf("Element : %d\n",p->data);
        p = p->next ;
        
    }
    


    return 0;
}