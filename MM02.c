#include <stdio.h>

int main(){
    int bottom, height;
    while(scanf("%d %d", &bottom, &height) != EOF){
        int tmp = (bottom * height);
        float area = (float)tmp / 2;
        printf("%.1f\n", area);
    }
}