#include <stdio.h>

int main()
{
    double timeSpent, averageSpeed, distance, fuelSpent;

    printf("Enter the time spent (in hours): ");
    scanf("%lf", &timeSpent);

    printf("Enter the average speed (in km/h): ");
    scanf("%lf", &averageSpeed);

    distance = timeSpent * averageSpeed;
    fuelSpent = distance / 12;

    printf("Fuel spent: %.3lf liters\n", fuelSpent);

    return 0;
}

