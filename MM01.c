#include <stdio.h>

int main(){
    int top, bottom, height;
    while(scanf("%d %d %d", &top, &bottom, &height) != EOF){
        int tmp = ((top + bottom) * height);
        float area = (float)tmp / 2;
        printf("Trapezoid area:%.1f\n", area);
    }
}