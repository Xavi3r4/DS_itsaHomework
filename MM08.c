#include <stdio.h>

int main(){
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
        int sum = a + b;
        long long mul = sum * sum;
        printf("%lld\n", mul);
    }
}