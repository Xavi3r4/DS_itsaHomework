#include <stdio.h>

int main(){
    unsigned int unicode;
    while(scanf("%u", &unicode) != EOF){
        printf("%c\n", (char)unicode);
    }
}