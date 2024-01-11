#include <stdio.h>

int main(){
    unsigned long long input;
    while(scanf("%llu", &input) != EOF){
        int a[4] = {0};
        a[0] = input / 86400;
        input %= 86400;
        a[1] = input / 3600;
        input %= 3600;
        a[2] = input / 60;
        a[3] = input % 60;
        printf("%d days\n%d hours\n%d minutes\n%d seconds\n", a[0], a[1], a[2], a[3]);
    }
}