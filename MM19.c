#include <stdio.h>

int main(){
    int input;
    while(scanf("%d", &input) != EOF){
        double fee;
        if(input <= 800)
            fee = input * 0.9;
        else if(input < 1500)
            fee = input * 0.9 * 0.9;
        else
            fee = input * 0.9 * 0.79;
        double output = (int)(fee * 10 + 0.5) / 10.0;
        printf("%.1lf\n", output);
    }
}