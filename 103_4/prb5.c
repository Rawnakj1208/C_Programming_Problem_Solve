#include <stdio.h>
int main() {
  int n, reversednum = 0, remainder, originalnum;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalnum = n;

    // doing the given number  reversed
    while (n != 0) {
        remainder = n % 10;
        reversednum = reversednum * 10 + remainder;
        n /= 10;
    }
    printf("The reversed number is: %d",reversednum);

    // palindrome if orignal number and reversed number are same
    if (originalnum == reversednum)
        printf("\n%d is a palindrome number", originalnum);
    else
        printf("\n%d is not a palindrome number", originalnum);

    return 0;
}
