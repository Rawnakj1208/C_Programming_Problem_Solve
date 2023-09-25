#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z') {
        printf("The entered character '%c' is a capital letter.\n", c);
    }
    else if (c >= 'a' && c <= 'z') {
        printf("The entered character '%c' is a small letter.\n", c);
    }
    else if (c >= '0' && c <= '9') {
        printf("The entered character '%c' is a digit.\n", c);
    }
    else {
        printf("The entered character '%c' is a special symbol.\n", c);
    }

    return 0;
}
