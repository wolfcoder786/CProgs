// WAP to insert an element in an 1-D array.
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of array :");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter number%d:", i);
        scanf("%d", &arr[i]);
    }
    printf("Array before insertion:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int pos;
    printf("Enter the location:");
    scanf("%d", &pos);
    int val;
    printf("Enter the value:");
    scanf("%d", &val);
    for (i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = val;
    printf("Array after insertion:\n");
    for (i = 0; i <=n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}