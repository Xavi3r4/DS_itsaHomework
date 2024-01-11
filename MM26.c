#include <stdio.h>

int main(){
    int input;
    scanf("%d", &input);
    int present = 1;
    while(present <= input){
        printf("%d*%d=%d\n", present, present, present * present);
        present++;
    }
}