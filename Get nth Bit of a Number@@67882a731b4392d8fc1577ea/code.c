#include <stdio.h>

int main() {
    int num,pos,bin;
    scanf("%d %d",&num,&pos);
    // for(int i=0;i<num;i++){
    //     int rem=num%10;
    //     bin=bin+rem;
    //     num=num/10;
    // }
    printf("%d",bin%10);
    return 0;
}