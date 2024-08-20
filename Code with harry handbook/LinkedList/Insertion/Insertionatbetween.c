#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data ;
    struct Node* next ;

};
void traversal(struct Node* p){
    while (p!= NULL)
    {
        printf("Element:%d\n",p->data);
        p = p->next ;

    }
}
struct Node* insertatIndex(struct Node* head , int data,int index){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = data ;

    struct Node* p = head ;
    int i = 0 ;
    while (i != index - 1)
    {
        p = p -> next ;
        i++;
    }
    ptr ->next = p->next ;
    p->next = ptr ;
    return head ;

    
}
int main(){
int a;

struct Node* head ;
struct Node* second ;
struct Node* third ;
struct Node* fourth ;
//creation of the above parts ;
head = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));
fourth = (struct Node*)malloc(sizeof(struct Node));
//linking 
head -> data  = 2 ;
head -> next  = second ;
second -> data  = 3 ;
second -> next  = third ;
third  -> data  = 4 ;
third  -> next  = fourth ;
fourth -> data  = 5 ;
fourth  -> next  = NULL ;

traversal(head);
printf("Enter the index you want to enter :");
scanf("%d",&a);
printf("After Insertion at  :\n");
head = insertatIndex(head,50,a);
traversal(head );
return 0 ;
}