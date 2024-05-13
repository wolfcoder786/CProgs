// WAP to find the sum of elements of a matrix in its upper triangle.
#include <stdio.h>
int main()
{
    int n1, n2, i, j;
    printf("Enter number1 of rows:");
    scanf("%d", &n1);
    printf("Enter number1 of column :");
    scanf("%d", &n2);

    int arr[n1][n2];
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            printf("Enter a%d%d :", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    int a[n1][n2];
    a[n1][n2] = arr[1][2]+arr[1][3]+arr[2][3];
    printf("Sum of Upper Triangle:%d",a[n1][n2]);
    return 0 ;
}