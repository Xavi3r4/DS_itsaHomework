#include <stdio.h>
unsigned long long table[20] = {0};

void fac(int n){
    if(n == 0 || table[n] != 0)
        return;
    if(table[n - 1] == 0)
        fac(n - 1);
    table[n] = n * table[n - 1];
    return;
}

int main(){
    int input;
    table[0] = 1;
    while(scanf("%d", &input) != EOF){
        fac(input);
        printf("%llu\n", table[input]);
    }
}