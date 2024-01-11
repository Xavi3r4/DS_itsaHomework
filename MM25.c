#include <stdio.h>

int main(){
    int input;
    while(scanf("%d", &input) != EOF){
        int sum = 0, present = 0;
        while(present <= input){
            sum += present;
            present += 3;
        }
        printf("%d\n", sum);
    }
}