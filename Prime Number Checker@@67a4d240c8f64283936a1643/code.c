#include <stdio.h>
#include <math.h>

void isPrime(int num);


void isPrime(int num) {
    if (num <= 1) {
        printf("0\n");
    }
    for (int i = 2; i <=num; i++) {
        if (num % i == 0) {
            printf("0\n");
            return;
        }
    }
    printf("1\n");
}