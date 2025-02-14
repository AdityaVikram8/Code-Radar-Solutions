// Your code here..
#include <stdio.h>
int main(){
    char ch;
    scanf("%d",&ch);
    if(ch=="aeiou"){
        printf("Vowel");
    }else if((ch>=65 && ch<=91) ||(ch>=97 && ch<=123)){
        printf("Consonants");
    }else if(isdigit(ch)){
        printf("Digit");
    }else{
        printf("Special Character");
    }
}