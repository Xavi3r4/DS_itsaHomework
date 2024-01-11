#include <stdio.h>

int main(){
    int a;
    while(scanf("%d", &a) != EOF){
        double k = a * 1.6;
        double r = (int)(k * 10.0 + 0.5) / 10.0;
        printf("%.1lf\n", r);
    }
}