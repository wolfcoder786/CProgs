// WAP to test whether a number is Armstrong Number or not.
// (A number is said to be Armstrong when the sum of cubes of its digit is equal with the original number.
// Ex-153)
#include <stdio.h>
int main()
{
    int num, m,number,result=0;
    printf("Enter a number:");
    scanf("%d", &number);
    num = number;
    while (num != 0)
    {
        m = num%10;
        result += m* m* m;
        num = num/10;
    }
    if (result == number)
    {
        printf("%d is a Armstrong Number",number);
    }
    else
    {
        printf("%d is not a Armstrong Number",number);
    }

    return 0;
}