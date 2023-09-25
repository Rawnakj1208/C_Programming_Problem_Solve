
#include <stdio.h>

int main() {
    int num, sum = 0;


    printf("Enter an integer: ");
    scanf("%d", &num);


    for (int i = num; i!= 0;i/= 10) {
        sum += i % 10;
    }

   printf("The sum of digits of the integer is: %d\n", sum);

    return 0;
}
