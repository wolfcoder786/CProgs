// WAP to create an array that can store N integers and display the contents of the array
#include <stdio.h>
int main()
{
    int  n,  i;
    printf("Enter number of data to be taken :");
    scanf("%d", &n);
    int marks[n];
    for (i = 1; i <= n; i++)
    {
        printf("Enter number%d:", i);
        scanf("%d", &marks[i]);
    }
    printf("For elements in array array:");
    for (size_t i = 1; i <=n; i++)
    {
        printf("%d  ", marks[i]);
    }
    
    

return 0;
}