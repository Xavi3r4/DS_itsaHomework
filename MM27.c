#include <stdio.h>

int main(){
    int inputA, inputB;
    while(scanf("%d %d", &inputA, &inputB) != EOF){
        int present, end, sum = 0;
        if(inputA > inputB){
            present = inputB;
            end = inputA;
        }
        else{
            present = inputA;
            end = inputB;
        }
        while(present <= end){
            sum += present;
            present++;
        }
        printf("%d\n", sum);
    }
}