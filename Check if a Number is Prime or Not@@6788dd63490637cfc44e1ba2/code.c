// Your code here...
#include <stdio.h>
int main(){
    bool isflag=true;
    if(a<=1){
        isflag=false;
    }else{
        for(int i=0;i<sqrt(a);i++){
            if(a%i==0){
                isflag=false;
            }
        }
    }
    if(isflag==true){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
}