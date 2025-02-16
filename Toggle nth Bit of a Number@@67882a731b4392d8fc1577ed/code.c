// Your code here...
#include <stdio.h>
int main(){
    int num,pos,bin[32],num1,sum=0;
    scanf("%d %d",&num,&pos);
    num1=num;
    bin[0]=0;
    bin[1]=0;
    bin[2]=0;
    for(int i=0;i<num1;i++){
        int rem=num%2;
        bin[i]=rem;
        num=num/2;
    }
    if(bin[pos]==1){
        bin[pos]=0;
    }else{
        bin[pos]=1;
    }
    for(int i=0;i<num1;i++){
        sum+=(bin[i])*(1<<i);
    }
    printf("%d",sum);
}