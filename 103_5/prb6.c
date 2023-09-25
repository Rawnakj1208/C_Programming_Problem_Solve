#include <stdio.h>

int main()
{
    int arr[100], n, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element you want to delete: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        // Invalid position
        printf("Invalid position\n");
        return 1;
    }

    // Shifting elements to delete the specified element
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deleting the element of the array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

