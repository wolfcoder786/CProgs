//Insertion at the Begining 
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
struct Node* Insertatbegin(struct Node* head , int data ){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head ;
    ptr ->data  = data ;
    head  = ptr ;
    return head ;

}
int main(){
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
printf("After Insertion at begin :\n");
head = Insertatbegin(head ,1 );
traversal(head );


return 0 ;
}