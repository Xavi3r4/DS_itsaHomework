#include <stdio.h>

int main(){
    double a;
    while(scanf("%lf", &a) != EOF){
        double tmp = (a * 9) / 5 + 32;
        printf("%.1f\n", tmp);
    }
}