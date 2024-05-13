// WAP to print Fibonacci series up to n terms.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number of terms:");
    scanf("%d", &num);
    int a = 0, b = 1,sum = 0;
    printf("Fibonacci Series:\n");
    printf("%d\n", a);
    printf("%d\n", b);

    for (int i = 0; i <= num; i++)
    {
        sum = a + b ;
        printf("%d\n",sum );
        a = b ;
        b = sum ;

    }
    

    return 0;
}