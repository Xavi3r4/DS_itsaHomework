#include <stdio.h>

int main(){
    double diff = (100 - (30 * 2.54)) / 100;
    int input;
    while(scanf("%d", &input) != EOF){
        double time = input / diff;
        int intime = (int)input / diff;
        if(time - intime > 0){
            intime++;
        }
        printf("%d\n", intime);
    }
}