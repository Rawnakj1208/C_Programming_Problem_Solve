
#include <stdio.h>

int reverse(int num)
{
    if (num == 0)
        return 0;
    else
        return (num % 10) * pow(10, (int)log10(num)) + reverse(num / 10);
}

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int result = reverse(num);

    printf("Reverse of %d = %d\n", num, result);

    return 0;
}


