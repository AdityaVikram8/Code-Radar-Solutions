#include <stdio.h>
// int isPrime(num);

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
int isPrime(num){
    if(num<=1){
        return 0;
    }else{
        for(int i=0;i<sqrt(n);i++){
            if(num%i==0){
                return 0;
            }
        }
    }
    return 1;
}