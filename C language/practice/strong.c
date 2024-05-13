// WAP to test whether an inputted number is a strong number or not.
// (A number is said to be Strong if sum of factorial of digits is equal to the original number)

#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number = number * factorial(number - 1);
    }
}
int strong(int n){
    int a ,i ;
    int sum = 0 ;
for ( i = 0; i != 0 ; i/=10 )
{
   int d = i % 10 ;
   printf("%d",i);
}

    

}
int main()
{
    int num;
    printf("Enter number :");
    scanf("%d", &num);
    printf("The factorial od %d : %d",num,factorial(num));
}