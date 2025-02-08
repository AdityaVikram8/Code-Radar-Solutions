#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int position=-1;
    for(int 31;i>=0;i--){
        if(a&<<i){
            position=i;
        }
    }
    if(position!=-1){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}