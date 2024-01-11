#include <stdio.h>

int main(){
    int input;
    while(scanf("%d", &input) != EOF){
        int array[3] = {0};
        while(input > 0){    
            if(input >= 10){
                array[0]++;
                input -= 10;
            }
            else if(input >= 5){
                array[1]++;
                input -= 5;
            }
            else if(input >= 1){
                array[2]++;
                input -= 1;
            }
        }
        printf("NT10=%d\nNT5=%d\nNT1=%d\n", array[0], array[1], array[2]);
    }
}