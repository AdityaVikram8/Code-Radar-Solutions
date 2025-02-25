#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
void isPrime(int num);

int main() {
    int t; // Number of test cases
    scanf("%d", &t);

    while (t > 0) {
        int num;
        scanf("%d", &num);
        isPrime(num);
        t--;
    }

    return 0;
}

// Function to check if a number is prime
void isPrime(int num) {
    if (num <= 1) {
        printf("0\n"); // Numbers less than or equal to 1 are not prime
        return;
    }
    if (num == 2) {
        printf("1\n"); // 2 is the only even prime number
        return;
    }
    if (num % 2 == 0) {
        printf("0\n"); // Other even numbers are not prime
        return;
    }

    // Check divisibility from 3 to sqrt(num), incrementing by 2 (skip even numbers)
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            printf("0\n"); // If divisible, it's not prime
            return;
        }
    }

    printf("1\n"); // If no divisors found, it's prime
}