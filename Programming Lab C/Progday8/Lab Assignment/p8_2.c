// WAP to print the natural numbers from 1 to n (value of n is user input)
#include<stdio.h>
int main(){
    int i, n ;
    printf("n = ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
    
return 0 ;
}