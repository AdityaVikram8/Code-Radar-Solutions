#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int position=-1;
    for(int i=31;i>=0;i--){
        if(a&(1<<i)){
            position=i;
            printf("Set");
        }else{
        printf("Not Set");
        }
        break;
    }
    return 0;
}