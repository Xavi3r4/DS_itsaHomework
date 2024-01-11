#include <stdio.h>

int main(){
    int inputA, inputB;
    while(scanf("%d %d", &inputA, &inputB) != EOF){
        double sum = 0;
        if(inputA <= 60)
            sum += inputA * inputB;
        else{
            sum += 60 * inputB;
            inputA -= 60;
            if(inputA <= 60)
                sum += inputA * inputB * 1.33;
            else{
                sum += 60 * inputB * 1.33;
                inputA -= 60;
                sum += inputA * inputB * 1.66;
            }
        }
        double output = (int)(sum * 10 + 0.5) / 10.0;
        printf("%.1lf\n", output);
    }
}