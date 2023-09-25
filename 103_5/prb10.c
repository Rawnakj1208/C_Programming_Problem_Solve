#include <stdio.h>

int main()
{
    int m, n, i, j;
    int mata[15][15], matb[15][15];

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);


    printf("Enter the elements of the matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &mata[i][j]);
        }
    }

    // Transpose of the matrix
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            matb[j][i] = mata[i][j];
        }
    }


    printf("Transpose matrix is:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", matb[i][j]);
        }
        printf("\n");
    }

    return 0;
}

