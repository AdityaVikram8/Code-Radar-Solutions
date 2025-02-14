// Your code here..
#include <stdio.h>
int main(){
    char ch;
    scanf("%s",&ch);
    if(ch=='a' || ch=='e' || ch=='i'|| ch=='o'|| ch=='u'){
        printf("Vowel");
    }else if((ch>=65 && ch<=91) || (ch>=97 && ch<=123)){
        printf("Consonants");
    }else if(isdigit(ch)){
        printf("Digit");
    }else{
        printf("Special Character");
    }
}