#include <stdio.h>
#include <stdbool.h>

int main() {
    int a;
    scanf("%d", &a);

    // If a is less than or equal to 1, it's not prime
    if (a <= 1) {
        printf("Not Prime");
        return 0;
    }

    // Loop from 2 to a-1 to check divisibility
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            printf("Not Prime");
            return 0; // If divisible, exit early
        }
    }

    // If no divisors found, it's a prime number
    printf("Prime");

    return 0;
}
