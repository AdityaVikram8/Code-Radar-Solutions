#include <stdio.h>
int main(){
    int n[];
    int t[];
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",n[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int max=0;
            if(max<n[i]){
                max=n[i];
            }
        }
        t[i]=max;
        max=0;
    }
    printf("%d",t[1]);

}