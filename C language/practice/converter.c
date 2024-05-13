#include<stdio.h>
int main(){
    int a  ;
    printf("Enter amount: ");
    scanf("%d",&a);
    int b  = a/100;
    int c  = (a%100)/10;
    printf("%dpaisa = %drupee and %d paisa",a,b,c);


return 0 ;
}