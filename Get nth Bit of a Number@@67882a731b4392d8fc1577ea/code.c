#include <stdio.h>

int main() {
    int num,pos;
    int bin[32];
    scanf("%d %d",&num,&pos);
    for(int i=0;i<num;i++){
        int rem=num%2;
        bin=bin+rem;
        num=num/2;
    }
    for(int i=0;i<=pos;i++){
        int rem=bin%10;
        bin=bin/10;
    }
    printf("%d",bin%10);
    return 0;
}