#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data ;
    struct Node* next ;

};
struct Node* Deletionatbegin(struct Node* head){
    struct Node* ptr = head ;
    head = head -> next ;
    free(ptr);
    return head ;
    
}
  

void traversal(struct Node* p){
    while (p!= NULL)
    {
        printf("Element:%d\n",p->data);
        p = p->next ;

    }

}
int main(){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 0 ;
    head -> next = second ;
    second->data = 1 ;
    second->next = third ;
    third->data = 2 ;
    third->next = NULL ;
    printf("The original linked list\n");
    traversal(head);
    printf("Updated List\n ");
    head  = Deletionatbegin(head);
    traversal(head);
return 0 ;
}