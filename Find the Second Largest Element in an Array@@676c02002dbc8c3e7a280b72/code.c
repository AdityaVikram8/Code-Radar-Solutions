#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N==1){
        return -1;
    }
    int n[N];
    int t[N];
    for(int i=0;i<N;i++){
        scanf("%d",&n[i]);
    }
    for(int i=0;i<N;i++){
        int max=-98765;
        for(int j=0;j<N;j++){
            if(max<n[i]){
                max=n[i];
            }
        }
        t[i]=max;
        max=0;
    }
    printf("%d",t[N-2]);
}