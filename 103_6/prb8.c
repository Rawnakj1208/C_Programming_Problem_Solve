
#include <stdio.h>

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue function, num1 = %d and num2 = %d\n", a, b);
}
void swapByRef(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByRef function, num1 = %d and num2 = %d\n", *a, *b);
}




int main()
{
    int num1, num2;

    printf("Enter value of num1: ");
    scanf("%d", &num1);
    printf("Enter value of num2: ");
    scanf("%d", &num2);

    printf("Before swap, num1 = %d and num2 = %d\n", num1, num2);

    swapByValue(num1, num2);

    printf("After swap, num1 = %d and num2 = %d\n", num1, num2);


    printf("-------------------------------------------");

    printf("-------------------------------------------");

    printf("\nBefore swap, num1 = %d and num2 = %d\n", num1, num2);

    swapByRef(&num1, &num2);

    printf("After swap, num1 = %d and num2 = %d\n", num1, num2);

    return 0;
}

