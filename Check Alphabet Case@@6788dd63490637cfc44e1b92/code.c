#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(isupper(a)==true){
        printf("Uppercase");
    }else if(islower(a)==true){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}