int isPrime(int num) {
    if (num <= 1) return 0; // 1 is not prime
    if (num == 2 || num == 3) return 1; // 2 and 3 are prime
    if (num % 2 == 0 || num % 3 == 0) return 0; // Exclude multiples of 2 and 3

    for (int i = 5; i * i <= num; i += 2) { // Check odd numbers only
        if (num % i == 0) {
            return 0;
        }
    }
    return 1; // Prime
}
