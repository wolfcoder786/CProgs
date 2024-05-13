// WAP to find largest element stored in an array.
#include <stdio.h>
int main()
{
    int n, a, i;
    printf("Enter size of an array :");
    scanf("%d", &n);
    int marks[n];

    for (i = 1; i <= n; i++)
    {
        printf("Enter the number%d :", i);
        scanf("%d", &marks[i]);
    }
    printf("The elements in the array are :");
    for (i = 1; i <= n; i++)
    {
        printf(" %d", marks[i]);
    }
    printf("\n");
    int max = marks[1];
    for (i = 1; i <= n; i++)
    {
        if (max < marks[i])
        {
            max = marks[i];
        }
    }

    printf("The largest number in the array :%d", max);

    return 0;
}