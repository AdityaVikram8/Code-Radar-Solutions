#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(uppercase(a)){
        printf("Uppercase");
    }else if(lowercase(a)){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}