#include <stdio.h>

int main() {
    int n;
    for(int i=0;i<n;i++){
        int k=1;
        for(int j=0;j<n-i;j++){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}