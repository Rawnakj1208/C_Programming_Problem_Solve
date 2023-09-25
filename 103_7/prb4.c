#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    int *ptr = a;

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr);
        ptr++;
    }

    printf("The elements of the array are:\n");
    ptr = a;

    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}
