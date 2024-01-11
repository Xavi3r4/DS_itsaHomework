#include <stdio.h>

int main(){
    char input;
    while(scanf("%c", &input) != EOF){
        getchar();
        printf("%d\n", (unsigned int)input);
    }
}