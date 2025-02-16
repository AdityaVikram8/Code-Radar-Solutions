#include <stdio.h>
#include <math.h>

int main() {
    int num, pos, bin[32];
    double sum = 0;  // sum is declared as a double to handle floating-point calculations
    scanf("%d %d", &num, &pos);

    int i = 0;
    // Convert num to binary and store in bin[]
    while (num > 0) {
        bin[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Flip the bit at position pos
    if (bin[pos] == 1) {
        bin[pos] = 0;
    } else {
        bin[pos] = 1;
    }

    // Convert the modified binary back to decimal using pow() (2^i)
    for (int j = 0; j < i; j++) {
        sum += bin[j] * pow(2, j);  // No need for casting, sum can now hold the floating-point value
    }

    printf("%d\n", (int)sum);  // Output the integer part of sum
    return 0;
}
