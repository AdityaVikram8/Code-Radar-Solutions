#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    // if (N < 2) {
    //     printf("%d",-1);
    // }
    int n[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &n[i]);
    }
    int max1 = -2147483648;
    int max2 = -2147483648;
    for (int i = 0; i < N; i++) {
        if (n[i] > max1) {
            max2 = max1;
            max1 = n[i];
        } else if (n[i] > max2 && n[i] < max1) {
            max2 = n[i];
        }
    }
    if (max2 == -2147483648) {
        printf("%d",-1);
    } else {
        printf("%d", max2);
    }

    return 0;
}