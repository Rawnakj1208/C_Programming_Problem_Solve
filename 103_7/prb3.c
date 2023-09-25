#include <stdio.h>

int main() {
    int x, y,*pt1,*pt2;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);

    pt1 = &x;
    pt2 = &y;

    int sum = *pt1 + *pt2;

    printf("The sum is: %d\n",sum);

    return 0;
}

