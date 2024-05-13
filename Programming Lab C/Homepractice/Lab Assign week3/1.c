// WAP to find the largest between two numbers.
#include<stdio.h>
int main(){
    int a , b ;
    printf("Enter a num1:");
    scanf("%d",&a);
    printf("Enter a num2:");
    scanf("%d",&b);
    if (a>b)
    {
        printf("%d is greater than %d",a,b);
        
    }
    else if (b>a)
    {
        printf("%d is greater than %d",b,a);
    }
    else
    {
        printf("Both are equal");
    }
    
    

return 0 ;
}