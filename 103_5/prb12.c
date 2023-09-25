#include <stdio.h>

int main()
{
    int n, X[100], i, small, pos;


    printf("Enter the size of the array: ");
    scanf("%d", &n);


    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &X[i]);
    }


    small = X[0];
    pos = 0;
    for(i=1; i<n; i++)
    {
        if(X[i] < small)
        {
            small = X[i];
            pos = i;
        }
    }


    printf("Smallest element of the array: %d\n", small);
    printf("Position of the smallest element: %d\n", pos);

    return 0;
}

