
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int *ptr1 = arr1;
    int *ptr2 = arr2;

    printf("Enter elements for the first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr1);
        ptr1++;
    }

    printf("Enter elements for the second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr2);
        ptr2++;
    }

    ptr1 = arr1;
    ptr2 = arr2;

    printf("\nArrays before swapping:\n");
    printf("Array 1: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr1);
        ptr1++;
    }
    printf("\n");

    printf("Array 2: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr2);
        ptr2++;
    }
    printf("\n");

    ptr1 = arr1;
    ptr2 = arr2;

    printf("\nSwapping arrays...\n");
    for (int i = 0; i < n; i++) {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2++;
    }

    ptr1 = arr1;
    ptr2 = arr2;

    printf("\nArrays after swapping:\n");
    printf("Array 1: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr1);
        ptr1++;
    }
    printf("\n");

    printf("Array 2: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr2);
        ptr2++;
    }
    printf("\n");

    return 0;
}
