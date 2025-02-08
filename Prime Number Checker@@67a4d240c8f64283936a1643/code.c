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

    // Check for negative input, sqrt of negative number is undefined
    if (num < 0) {
        return 0;  // Negative numbers are not prime
    }

    int limit = (int)sqrt(num);  // Calculate integer square root once
    for (int i = 2; i <= limit; i++) {  // Loop from 2 to sqrt(num)
        if (num % i == 0) {
            return 0;  // If divisible by i, num is not prime
        }
    }

    return 1;  // num is prime
}
