
#include <stdio.h>
#include <math.h>

int isPrime(int num) {

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isArmstrong(int num) {
    int sum = 0, originalNum = num, rem;
    int digits = 0;
    while (originalNum != 0) {
        digits++;
        originalNum /= 10;
    }
    originalNum = num;
    while (originalNum != 0) {
        rem = originalNum % 10;
        sum += pow(rem, digits);
        originalNum /= 10;
    }
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int isPerfect(int num) {
    int i, sum = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num, isPrimeNum, isArmstrongNum, isPerfectNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    isPrimeNum = isPrime(num);
    isArmstrongNum = isArmstrong(num);
    isPerfectNum = isPerfect(num);
    if (isPrimeNum) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    if (isArmstrongNum) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    if (isPerfectNum) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}
