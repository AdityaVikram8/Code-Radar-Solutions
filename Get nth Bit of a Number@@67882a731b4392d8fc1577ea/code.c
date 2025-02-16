#include <stdio.h>

int main() {
    int num,pos,num1;
    int bin[32];
    scanf("%d %d",&num,&pos);
    num1=num;
    for(int i=0;i<num1;i++){
        int rem=num%2;
        bin[i]=rem;
        num=num/2;
    }
    printf("%d",bin[pos]);
    return 0;
}