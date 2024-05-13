// WAP to test whether a number is Perfect Number or not.
// (A number is said to be Perfect when the sum of factors excluding the number itself is equal to the original number.
// Ex-6)
#include <stdio.h>
int main()
{
    int i,sum  = 0 , num;
    printf("Enter a num :");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
        int a = num % i;
        if (a == 0)
        {
            printf("%d\n", i);
            
            sum = sum + i;
           
        }
    }
 printf("Sum :%d\n", sum);
 if (sum == num)
 {
    printf("The number is a Perfect number\n");
 }
 else
 {
    printf("The number is not a Perfect number");
 }
  
    return 0;
}