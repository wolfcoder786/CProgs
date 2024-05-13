// WAP to add two numbers entered through the keyboard by using a suitable user defined function.
#include <stdio.h>
int add(int a, int b)
{
    int sum;
    sum = a + b;
}
int main()
{ 
    int  x , y ;
    printf("Enter number 1 :");
    scanf("%d",&x);
    printf("Enter number 2 :");
    scanf("%d",&y);

    printf("Sum :%d",add(x,y));

    return 0;
}