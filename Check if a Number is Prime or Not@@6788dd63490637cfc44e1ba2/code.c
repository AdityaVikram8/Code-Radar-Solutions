// Your code here...
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(){
    int a;
    scanf("%d",&a);
    bool isflag=true;
    if(a<=1){
        isflag=false;
    }else{
        for(int i=2;i<=sqrt(a);i++){
            if(a%i==0){
                isflag=false;
                break;
            }
        }
    }
    if(isflag==true){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
}