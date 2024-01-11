#include <stdio.h>

int main(){
    int inputA, inputB;
    while(scanf("%d %d", &inputA, &inputB) != EOF){
        if(inputA <= 100 && inputB <= 100)
            printf("inside\n");
        else
            printf("outside\n");
    }
}