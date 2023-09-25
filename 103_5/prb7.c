#include <stdio.h>

int main() {
    int arr[100], n, key, left = 0, right, mid;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);


    right = n - 1;

    while (left <= right) {
        // Calculate the middle index
        mid = (left + right) / 2;

        if (arr[mid] == key) {//key element is the mid element

            printf("Element found at index %d\n", mid);
            break;
        } else if (arr[mid] < key) {// key element is in the right half of the array

            left = mid + 1;
        } else { // key element is in the left half of the array

            right = mid - 1;
        }
    }

    if (left > right) {
        // key element not found show massage
        printf("Element does not exist in the array");
    }

    return 0;
}

