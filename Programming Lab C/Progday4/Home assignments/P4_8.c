#include<stdio.h>
int main(){
    int a ;
    printf("Enter the amount in paisa:");
    scanf("%d",&a);
    int b = a/100;/*--->gives quotient*/
    int c = a%100;/*--->gives remainder*/
    printf("%d paisa = %d rupees %d paisa",a,b,c);

}