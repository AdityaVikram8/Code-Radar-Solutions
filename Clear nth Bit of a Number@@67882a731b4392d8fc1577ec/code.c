// Your code here...
#include <stdio.h>
int main(){
    int num,pos,bin[32],num1;
    scanf("%d %d",&num,&pos);
    num1=num;
    for(i=0;i<num1;i++){
        int rem=num%2;
        bin[i]=rem;
        num=num%10;
    }
    if(bin[pos]==1){
        bin[pos]=0;
    }else{
        bin[pos]=1;
    }
    printf("%d",bin[pos]);
}