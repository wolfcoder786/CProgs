// WAP to print the following pattern for rows = 4
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4
#include <stdio.h>
void num(int rows)
{
    int i, j;

    for (i = 1; i <=rows;i++)
    {
    //    printf("%d",i);
       for ( j = 1; j <=rows ; j++)
       {
         printf("%d",i);
       }
       printf("\n");

    }
}
int main()
{
    int n;
    printf("Enter Number of rows:");
    scanf("%d", &n);
    num(n);

    return 0;
}