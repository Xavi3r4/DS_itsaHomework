#include <stdio.h>

int main(){
    int startH, startM, endH, endM;
    scanf("%d%d%d%d", &startH, &startM, &endH, &endM);
    startM += startH * 60;
    endM += endH * 60;
    int diff = endM - startM;
    int fee = 0;
    if(diff <= 120)
        fee = diff / 30 * 30;
    else{
        fee += 120;
        diff -= 120;
        if(diff <= 120)
            fee = diff / 30 * 40;
        else{
            fee += 160;
            diff -= 120;
            fee += diff / 30 * 60;
        }
    }
    printf("%d\n", fee);
}