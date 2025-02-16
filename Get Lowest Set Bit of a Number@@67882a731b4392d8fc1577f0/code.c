// Your code here...
#include <stdio.h>
int main(){
    int num,pos,bin[1025],num1;
    scanf("%d",&num);
    num1=num;
    for(int i=0;i<num1;i++){
        int rem=num%2;
        bin[i]=rem;
        num=num/2;
    }
    for(int i=0;i<num1;i++){
        if(bin[i]==1){
            printf("%d",i);
            break;
        }
    }
}