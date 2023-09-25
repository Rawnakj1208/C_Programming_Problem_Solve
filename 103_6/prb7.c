
#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series without function: ");
//without function
    for (int i = 1; i <= n; i++)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
//with function part

 printf("\nFibonacci Series with function: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d, ", fibonacci(i));
    }

    return 0;
}

