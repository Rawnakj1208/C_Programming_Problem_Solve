
#include <stdio.h>

int main() {
    int num, first, last, sum;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);


    last = num % 10;
    first = num;
    while (first >= 10) {
        first /= 10;
    }

    sum = first + last;
    printf("The first digit is: %d\n",first);
    printf("The last digit is: %d\n",last);
    printf("The sum of the first and last digits of %d is: %d\n", num, sum);

    return 0;
}







