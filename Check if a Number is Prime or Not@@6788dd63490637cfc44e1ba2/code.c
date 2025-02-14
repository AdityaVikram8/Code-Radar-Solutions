#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int a;
    scanf("%d", &a);

    bool isflag = true;

    if (a <= 1) {
        isflag = false;
    } else {
        for (int i = 2; i <= (int)sqrt(a); i++) {
            if (a % i == 0) {
                isflag = false;
                break;
            }
        }
    }

    if (isflag) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
