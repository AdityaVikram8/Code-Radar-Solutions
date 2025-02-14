// Your code here...
#include  <stdio.h>
int main(){
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    if(cp-sp>0){
        printf("Loss");
    }else if(cp-sp<0){
        printf("Profit");
    }else{
        printf("No Profit No Loss");
    }
}