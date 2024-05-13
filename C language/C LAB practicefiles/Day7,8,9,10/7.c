// WAP to test whether a number is Palindrome Number or not.
// (A number is said to be Palindrome when its reverse is equal with the original number.Ex-121)
#include <stdio.h>
int main()
{
    int num, reversed = 0, m;
    printf("Enter a number :");
    scanf("%d", &num);
    int  a = num;
   while (num != 0)
    {
        m = num % 10;
        reversed = (reversed * 10) + m;
        num = num / 10;
    }
    if (a == reversed)
    {
        printf("%d is a Palindrome NUmber ", a);
    }
    else
    {
        printf("%d is not a palindrome number", a);
    }

    return 0;
}
