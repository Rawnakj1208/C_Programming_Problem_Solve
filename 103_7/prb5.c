#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int sourceArray[size];
    int *sourcePtr = sourceArray;

    printf("Enter the elements of the source array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", sourcePtr);
        sourcePtr++;
    }

    int destinationArray[size];
    int *destinationPtr = destinationArray;

    sourcePtr = sourceArray;

    printf("\nCopying the array...\n");


    for (int i = 0; i < size; i++) {
        *destinationPtr = *sourcePtr;
        destinationPtr++;
        sourcePtr++;
    }

    printf("\nThe elements of the source array are:\n");
    sourcePtr = sourceArray;

    for (int i = 0; i < size; i++) {
        printf("%d ", *sourcePtr);
        sourcePtr++;
    }

    printf("\n\nThe elements of the destination array after copying are:\n");
    destinationPtr = destinationArray;

    for (int i = 0; i < size; i++) {
        printf("%d ", *destinationPtr);



        destinationPtr++;
    }

    printf("\n");

    return 0;
}

