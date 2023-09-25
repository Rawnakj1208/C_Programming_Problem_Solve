#include <stdio.h>

int main() {
    int x, y,temp;
    printf("Enter the value of variable x: ");
    scanf("%d", &x);
    printf("Enter the value of variable y: ");
    scanf("%d", &y);

    int *ptr1 = &x;
    int *ptr2 = &y;

     temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping x and y:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}

