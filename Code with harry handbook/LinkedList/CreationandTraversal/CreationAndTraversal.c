#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data ;
    struct Node* next ;

};
void Traversal(struct Node* ptr ){
    while (ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr -> next ;

    }
    
}

int main(){
    struct Node* head ;
    struct Node* second;
    struct Node* third ;
    struct Node* fourth ;
    head  = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node)); 
    //head to second
    head -> data  = 7 ;
    head -> next  = second ;
    //second to third
    second -> data  = 8;
    second -> next  = third ;
    //third to fourth
    third -> data = 9 ;
    third -> next = fourth ;
    //fourth to Null
    fourth -> data = 10 ;
    fourth -> next  = NULL ;
    Traversal(head);
    
    return 0 ;

}