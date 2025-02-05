#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(a.isuppercase()){
        printf("Uppercase");
    }else if(a.islowercase()){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}