#include <stdio.h>

void reverse(int *arr, int n) {
    int *start = arr;
    int *end = arr + n - 1;

    while (start < end) {

        int temp = *start;
        *start = *end;
        *end = temp;


        start++;
        end--;
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    reverse(arr,n);

    printf("The reversed array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
