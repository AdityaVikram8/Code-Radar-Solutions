#include <stdio.h>

int main() {
    int num,pos;
    int bin[32];
    scanf("%d %d",&num,&pos);
    for(int i=0;i<num;i++){
        int rem=num%2;
        bin[i]=rem;
        num=num/2;
    }
    printf("%d",bin[pos]%10);
    return 0;
}