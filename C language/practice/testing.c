#include <stdio.h>

void reverse_first_last(int arr[], int size) {
    if (size < 2) {
        return; // Nothing to reverse for array size less than 2
    }

    // Swap the first and last elements
    int temp = arr[0];
    arr[0] = arr[size - 1];
    arr[size - 1] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverse_first_last(arr, size);

    printf("Reversed first and last elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
