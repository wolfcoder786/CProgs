//  Write a program using recursion to calculate nth element of Fibonacci series.
#include<stdio.h>
int fibonacci(int n ){
    if(n== 1 || n == 2 ){
        return n-1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n ;
    printf("Enter the term you want :");
    scanf("%d",&n);
    // fibonacci(n);
   printf("The term %d:%d",n,fibonacci(n)); 


return 0 ;
}