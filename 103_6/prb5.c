#include <stdio.h>

double power(double base, int exponent)
{
    if (exponent == 0)
        return 1;
    else if (exponent > 0)
        return base * power(base, exponent - 1);
    else
        return 1 / base * power(base, exponent + 1);
}

int main()
{
    double base, result;
    int exponent;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("%.2lf^%d = %.2lf", base, exponent, result);

    return 0;
}


