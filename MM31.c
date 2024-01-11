#include <stdio.h>

int main(){
    int input;
    while(scanf("%d", &input) != EOF){
        int sum = 0, present = 6;
        while(present <= input){
            sum += present;
            present += 12;
        }
        printf("%d\n", sum);
    }
}