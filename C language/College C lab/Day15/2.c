#include<stdio.h>
int factorial(int a){
    int fact = 1 ;
    for ( int i = 1; i<=a; i++)
    {
         fact = fact * i ;
    }
    return fact;

}
int main(){
    int a ;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("The factorial of %d : %d", a , factorial(a));

return 0 ;
}