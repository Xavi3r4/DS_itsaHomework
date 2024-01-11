#include <stdio.h>

int main(){
    int input;
    while(scanf("%d", &input) != EOF){
        for(int i = 7; i >= 0; i--){
            int bit = (input >> i) & 1;
            printf("%d", bit);
        }
        printf("\n");
    }
}