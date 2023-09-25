#include <stdio.h>

int main()
{
    int arr[100], n, pos, x;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position at which you want to insert the element: ");
    scanf("%d", &pos);

    printf("Enter the element you want to insert: ");
    scanf("%d", &x);


    for (int i = n - 1; i >= pos - 1; i--) { //shifiting element to make space
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = x;

    printf("Array after inserting the element the new array is:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

