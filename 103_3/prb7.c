
#include <stdio.h>

int main() {
    int num1, num2, count = 0, sum = 0;

    printf("Enter two integers (num1 < num2): ");
    scanf("%d %d", &num1, &num2);

    for (int i = num1; i <= num2; i++) {
        if (i % 5 == 0) {
            count++;
            sum += i;
        }
    }

    printf("The number of integers divisible by 5 between %d and %d is: %d\n", num1, num2, count);
    printf("The sum of all integers divisible by 5 between %d and %d is: %d\n", num1, num2, sum);

    return 0;
}





