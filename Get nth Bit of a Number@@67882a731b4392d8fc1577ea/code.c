#include <stdio.h>

int main() {
    int num,pos;
    scanf("%d %d",&num,&pos);
    for(int i=n;i>=0;i--){
        if(num&(1<<i)){
            printf("%d",num&(1<<i));
        }
            break;
    }
    return 0;
}