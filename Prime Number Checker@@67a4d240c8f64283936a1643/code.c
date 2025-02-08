#include <stdio.h>
// isPrime(num);

int main() {
    printf("%s", welcome());
    return 0;
}
int isPrime(num){
    if(num<=1){
        return 0;
    }else{
        for(int i=0;i<n;i++){
            if(num%i==0){
                return 0;
            }
        }
    }
    return 1;
}