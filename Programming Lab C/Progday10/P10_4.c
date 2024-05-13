// The first few numbers of the Lucas sequence which is a variation on the Fibonacci sequence are:
// 1  3  4  7  11  18  29  … WAP to generate the Lucas sequence.
#include <stdio.h>
int main()
{
    int i, a = 2, b = 1,c, num;
    printf("Enter number of Lucas numbers to be generated: ");
    scanf("%d", &num);

    for (i = 1; i <= (num+1); i++)
    {
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
        
    }
    

    return 0;
}