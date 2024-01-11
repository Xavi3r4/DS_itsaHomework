#include <stdio.h>

int main(){
    int inputA, inputB;
    while(scanf("%d %d", &inputA, &inputB) != EOF){
        if((inputA * inputA + inputB * inputB) <= 10000)
            printf("inside\n");
        else
            printf("outside\n");
    }
}