#include <stdio.h>

int main()
{
    int m, n, i, j;
    int mata[15][15], matb[15][15], addition[15][15];

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &m, &n);


    printf("Enter the elements of the first matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &mata[i][j]);
        }
    }


    printf("Enter the elements of the second matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &matb[i][j]);
        }
    }

    // Add the two matrices element
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            addition[i][j] = mata[i][j] + matb[i][j];
        }
    }


    printf("The addition of two matrix is:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", addition[i][j]);
        }
        printf("\n");
    }

    return 0;
}

