#include<stdio.h>
#include<malloc.h>
struct Node {
    int data ;
    struct Node* left ;
    struct Node* right ;

};
struct Node* Createnode(int data){
    struct Node* n = (struct Node* )malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n ;

}
void preOrder(struct Node* root){
    if (root!=NULL)
    {
        printf("%d",root->data);
        preOrder(root->left);
        preOrder(root->right);

    }
    
}
void postOrder(struct Node* root){
    if (root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d",root->data);

    }
    
}
void inOrder(struct Node* root){
    if (root!=NULL)
    {
        inOrder(root->left);
        printf("%d",root->data);
        inOrder(root->right);
        

    }
    
}

int main(){
    struct Node* p = Createnode(5);
    struct Node* p1 = Createnode(3);
    struct Node* p2 = Createnode(6);
    struct Node* p3 = Createnode(1);
    struct Node* p4 = Createnode(4);
    /*
        5
       / \
      3   6
     / \
     1  4
    */
    //linking ;
    p ->left = p1 ;
    p ->right = p2 ;
    p1->left = p3 ;
    p1->right = p4 ;
    // printf("PreOrder:\n");
    // preOrder(p);
    // printf("\n");
    // printf("PostOrder:\n");
    // postOrder(p);
    // printf("\n");
    printf("InOrder:\n");
    inOrder(p);


return 0 ;
}