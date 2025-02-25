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
        t--;
    }
    return 0;
}

void isPrime(int num) {
    if (num <= 1) {
        printf("0\n");
        return;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            printf("0\n");
            return;
        }
    }
    printf("1\n");
}
