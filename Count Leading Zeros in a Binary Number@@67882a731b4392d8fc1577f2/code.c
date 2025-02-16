// Your code here...
#include <stdio.h>
int main(){
    int num,num1,c=0;
    int bin[8];
    scanf("%d",&num);
    num1=num;
    for(int i=0;i<num1;i++){
        int rem=num%2;
        bin[i]=rem;
        num=num/2;
    }
    for(int i=0;i<sizeof(bin);i++){
        c++;
    }
    printf("%d",32-c);
}