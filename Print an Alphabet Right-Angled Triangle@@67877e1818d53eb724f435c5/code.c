#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int ch=65;
        for(int j=0;j<n;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}