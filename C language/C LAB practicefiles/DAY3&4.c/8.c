// WAP to reverse a three-digit number. Number must be a user input.
#include<stdio.h>
int main(){
    int a ;
    printf("Enter a number :");
    scanf("%d",&a);
    int fd = a/100; 
    int ld = a%10 ;
    int md = ((a%100)/10);
    printf("reverse: %d%d%d",ld,md,fd);

return 0 ;
}