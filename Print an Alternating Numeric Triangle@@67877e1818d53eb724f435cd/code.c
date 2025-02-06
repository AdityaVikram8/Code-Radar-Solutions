#include <stdio.h>
int main() {
    int n,a=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",a);
            if(a==1){
                a=0;
            }else{
                a=1;
            }
        }
        if(a==1){
                a=0;
            }else{
                a=1;
            }
        printf("\n");
    }
    return 0;
}