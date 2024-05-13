// WAP to print the natural numbers from n to 1(value of n is user input)
#include<stdio.h>
int main(){
    int a,i;
    printf("Enter number :");
    scanf("%d",&a);
    for ( i = a; i >=1; i--)
    {
        printf("%d",i);
    }
    
return 0 ;
}