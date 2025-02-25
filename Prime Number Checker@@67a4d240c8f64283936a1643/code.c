#include <stdio.h>
#include <math.h>

void isPrime(int num);

int main() {
    int t;
    scanf("%d", &t);
    while (t > 0) {
        int num;
        scanf("%d", &num);
        isPrime(num);
        printf("\n");  // Move to the next line for each test case output
        t--;
    }
    return 0;
}

void isPrime(int num) {
    if (num <= 1) {
        printf("0");  // Not a prime number
    } else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                printf("0");  // Not a prime number
                return;  // Exit function once a divisor is found
            }
        }
        printf("1");  // Prime number
    }
}
