// WAP to print the natural numbers from n to 1(value of n is user input).
#include<stdio.h>
int main(){
    int i , n ;
    printf("Enter n :");
    scanf("%d",&n);
    for ( i = n ; i>=1;i--)
    {
      printf("%d\n",i);
    }
    
return 0 ;
}