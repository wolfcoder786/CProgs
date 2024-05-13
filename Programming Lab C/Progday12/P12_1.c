// Wap for a two dimensional to store and display the elements. (Store temperature of two cities for a week and display it)
#include <stdio.h>
int main()
{
    int n1, n2, i, j;
    printf("Enter number of cities:");
    scanf("%d", &n1);
    printf("Enter no of days:");
    scanf("%d", &n2);
    int arr[n1][n2];
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            printf("City%d,Day%d:", i, j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            printf("City%d,Day%d:%d\n", i, j,arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}