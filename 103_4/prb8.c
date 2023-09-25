#include <stdio.h>

int main() {
    int num1, num2, gcd, lcm, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Finding the GCD
    for (i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    // Finding the LCM
    lcm = (num1 * num2) / gcd;

    // Print the GCD and LCM
    printf("The GCD of %d and %d is %d\n", num1, num2, gcd);
    printf("The LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}


