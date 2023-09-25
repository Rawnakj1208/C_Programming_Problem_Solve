
#include <stdio.h>

void add(int *matrix1, int *matrix2, int *result) {
    for (int i = 0; i < 4; i++) {
        *(result + i) = *(matrix1 + i) + *(matrix2 + i);
    }
}

int main() {
    int matrix1[2][2];
    int matrix2[2][2];
    int result[2][2];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }


    add((int *)matrix1, (int *)matrix2, (int *)result);

    printf("The sum of the matrices is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
