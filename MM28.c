#include <stdio.h>

int main(){
    int input;
    while(scanf("%d", &input) != EOF){
        int present = 35;
        while(present <= input){
            printf("%d", present);
            present += 35;
            if(present <= input)
                printf(" ");
            else
                printf("\n");
        }
    }
}