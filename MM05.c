#include <stdio.h>

int main(){
    double a;
    while(scanf("%lf", &a) != EOF){
        double area = a * a;
        double k = (int)(area * 10.0 + 0.5) / 10.0;
        printf("%.1lf\n", k);
    }
}