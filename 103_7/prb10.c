#include <stdio.h>

void stringCopy(char *source, char *target) {
    while (*source != '\0') {
        *target = *source;
        source++;
        target++;
    }
    *target = '\0';
}

int main() {
    char source[100];
    char target[100];

    printf("Enter a string: ");
    scanf("%s", source);

    stringCopy(source,target);

    printf("Copied string: %s\n", target);

    return 0;
}

