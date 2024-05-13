// WAP to insert an element in an 1-D array.
#include <stdio.h>
int main()
{
    int n, i, val, pos;
    printf("Enter no of elements:");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter number%d element:", i);
        scanf("%d", &arr[i]);
    }
    printf("The Elements in the array are :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the location:");
    scanf("%d", &pos);
    printf("Enter the element to be inserted:");
    scanf("%d", &val);\
    for (i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = val;
    printf("The Elements in the array are :");
    for (i = 0; i <=n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}