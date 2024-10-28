#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("No memory allocated ");
    }
    printf("Enter the elements:\n");
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        printf("Element %d:", i);
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum:%d",sum);
    free(ptr);
}