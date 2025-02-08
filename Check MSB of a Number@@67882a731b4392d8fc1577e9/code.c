#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int position=-1;
    for(int i=31;i>=0;i--){
        if(a&(1<<i)){
            position=i;
            break;
        }
    }
    if(position!=-1){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}