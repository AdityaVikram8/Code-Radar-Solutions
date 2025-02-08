#include <stdio.h>
#include <math.h>
int isPrime(int num);

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}
int isPrime(int num){
    if (num <= 1) {
        return 0;  // Numbers less than or equal to 1 are not prime
    }
    
    // Check divisibility from 2 to num-1 (brute force)
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;  // If divisible by i, num is not prime
        }
    }

    return 1;  // num is prime
}