#include <stdio.h>

int main() {
    int n, i, arr[10];
    scanf("%d", &n);

    for (i = 0; i < 10; i++) {
        arr[i] = n;
        printf("N[%d] = %d\n", i, arr[i]);
        n *= 2;
    }

    return 0;
}

