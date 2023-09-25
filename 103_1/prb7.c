#include <stdio.h>

int main()
{
    int employeeNumber, hoursWorked;
    double hourlyRate, salary;

    printf("Enter the employee's number: ");
    scanf("%d", &employeeNumber);

    printf("Enter the number of hours worked in a month: ");
    scanf("%d", &hoursWorked);

    printf("Enter the hourly rate: ");
    scanf("%lf", &hourlyRate);

    salary = hoursWorked * hourlyRate;

    printf("Employee number: %d\n", employeeNumber);
    printf("Salary: %.2lf\n", salary);

    return 0;
}

