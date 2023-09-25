#include <stdio.h>

int sumOfDigits(int num)
{
    if (num == 0)
        return 0;
    else
        return (num % 10) + sumOfDigits(num / 10);
}

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int result = sumOfDigits(num);

    printf("Sum of digits of %d = %d\n", num, result);

    return 0;
}



