
#include <stdio.h>
#include <math.h>

int main()
{
    // (i) V = u + at
    double u, a, t, v,s;

    printf("Enter the initial velocity (u): ");
    scanf("%lf", &u);

    printf("Enter the acceleration (a): ");
    scanf("%lf", &a);

    printf("Enter the time (t): ");
    scanf("%lf", &t);

    v = u + (a * t);
    printf("Final velocity (V) = %lf\n", v);


    // (ii) S = ut + 1/2at^2

    s = (u * t) + (0.5 * a * t * t);
    printf("Displacement (S) = %lf\n", s);


    // (iii) T = 2*a + sqrt(b + 9c)
    double b, c, T;

    printf("\nEnter the value of a: ");
    scanf("%lf", &a);

    printf("Enter the value of b: ");
    scanf("%lf", &b);

    printf("Enter the value of c: ");
    scanf("%lf", &c);

    T = 2 * a + sqrt(b + (9 * c));
    printf("Result (T) = %lf\n", T);

    return 0;
}
