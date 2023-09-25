#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i <n; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0;
    int *p = a;
    for (int i = 0; i < n; i++) {
        sum += *p;
        p++;
    }

    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}
