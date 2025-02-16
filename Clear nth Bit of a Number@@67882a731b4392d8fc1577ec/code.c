#include <stdio.h>
#include <math.h>

int main() {
    int num, pos, bin[32];
    double sum = 0.0;  // sum is a double to handle floating-point numbers
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
        sum += bin[j] * pow(2, j);  // Use pow() to calculate powers of 2
    }

    // Output the result as an integer
    printf("%d\n", (int)sum);  // Cast the sum to an integer for printing
    return 0;
}
