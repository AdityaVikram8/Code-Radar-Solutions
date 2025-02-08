#include <stdio.h>
#include <math.h>

int isPrime(int num);

int main() {
    int t;
    scanf("%d", &t);  // Read number of test cases
    while (t--) {
        int num;
        scanf("%d", &num);  // Read the number for the current test case
        printf("%d\n", isPrime(num));  // Output the result of isPrime function
    }
    return 0;
}

int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Numbers less than or equal to 1 are not prime
    }

    // Check if the number is 2 or 3 directly, as they are prime
    if (num == 2 || num == 3) {
        return 1;
    }

    // Eliminate all even numbers greater than 2
    if (num % 2 == 0) {
        return 0;
    }

    // Only check for odd divisors starting from 3 up to sqrt(num)
    int limit = (int)sqrt(num);  // Calculate integer square root once
    for (int i = 3; i <= limit; i += 2) {  // Start at 3 and check only odd numbers
        if (num % i == 0) {
            return 0;  // If divisible by i, num is not prime
        }
    }

    return 1;  // num is prime
}
