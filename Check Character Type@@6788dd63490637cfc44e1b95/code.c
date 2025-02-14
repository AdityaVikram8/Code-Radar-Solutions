// Your code here..
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i'|| ch=='o'|| ch=='u'){
        printf("Vowel");
    }else if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
        printf("Consonant");
    }else if(ch=='9'||ch=='8'||ch=='7'||ch=='6'||ch=='5'||ch=='4'||ch=='3'||ch=='2'||ch=='1'||ch=='0'){
        printf("Digit");
    }else{
        printf("Special Character");
    }
}