// WAP to find out reverse of a number.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    int m;
    while (a > 0)
    {
        m = a % 10;
        printf("%d", m);
        a = a / 10;
    }
    return 0 ;
}