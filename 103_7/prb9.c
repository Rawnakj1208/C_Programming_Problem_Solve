#include <stdio.h>

int stringLen(char *string) {
    int length = 0;
    while (*string != '\0') {
        length++;
        string++;
    }
    return length;
}

int main() {
    char string[100];
    printf("Enter a string: ");
    scanf("%s", string);

    int length = stringLen(string);
    printf("Length of the string: %d\n", length);

    return 0;
}

