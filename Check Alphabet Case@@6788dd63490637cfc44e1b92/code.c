#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(uppercase(a)){
        printf("Uppercase");
    }else if(lowercase()){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}