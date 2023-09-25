#include <stdio.h>

int main()
{
    int mata[3][3], matb[3][3], matc[3][3];
    int i, j, k;

    printf("Enter the elements of first matrix :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &mata[i][j]);
        }
    }

    printf("Enter the elements of second matrix :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &matb[i][j]);
        }
    }

    // Multiplying the matrices
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            matc[i][j] = 0;
            for(k=0; k<3; k++)
            {
                matc[i][j] += mata[i][k] * matb[k][j];
            }
        }
    }


    printf("Multiply of two 3 X 3 Matrices is.:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", matc[i][j]);
        }
        printf("\n");
    }

    return 0;
}

