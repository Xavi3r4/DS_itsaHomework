#include <stdio.h>

int main(){
    int inputA, inputB;
    scanf("%d %d", &inputA, &inputB);
    while(inputB != 0){
        int tmp = inputB;
        inputB = inputA % inputB;
        inputA = tmp;
    }
    printf("%d\n", inputA);
}