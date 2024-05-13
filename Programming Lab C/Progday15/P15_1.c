// 1.WAP to print the fisrt 50 natural number using recursion
#include<stdio.h>
int num(int n){

    if (n<=50)
    {
        printf("%d\n",n);
        num(n+1);
        
    }
}
// #include<stdio.h>
int main(){
    int num1  = 1 ;
    printf("The natural numbers are :\n");
    num(num1);

return 0 ;
}
    