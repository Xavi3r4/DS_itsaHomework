#include <stdio.h>

int main(){
    int input;
    while(scanf("%d", &input) != EOF){
        printf("%X\n", input);
    }
}