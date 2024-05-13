/*WAP to input any two integers, and provide a menu to the user to select any of the options as 
add, subtract, multiply, divide and display the result accordingly.Select the operation from the menu
(A for Add, S for Subtract, M for Multiplication, D for Division) */
#include<stdio.h>
int main(){
    int a , b ;
    printf("Select the operation menu  : \n 1.A for Add\n2. S for Subtract\n3.M for Multiplication\n4. D for Division\n");
    char ch ;
    printf("Enter operation : ");
    scanf("%c",&ch);
    printf("Enter num1 :");
    scanf("%d",&a);
    printf("Enter num2 :");
    scanf("%d",&b);
    
    if (ch == 'A'||ch == 'a' )
    {
        int add = a+b ;
        printf("Addition of the numbers: %d",add);

    }
    else if (ch =='S'||ch == 's')
    {
        int sub = a -  b ;
        printf("Substaction of the numbers: %d",sub);

    }
    else if (ch =='M'||ch == 'm')
    {
        int mul = a*b ;
        printf("Multiplication  of the numbers: %d",mul);

    }
    else if (ch =='D'||ch == 'd')
    {
        float div = a/b ;
        printf("Division of the numbers: %f",div);

    }
    else
    {
        printf("Invalid Operation character ");
    }

return 0 ;
}