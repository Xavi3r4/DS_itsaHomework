#include <stdio.h>

int main(){
    int a;
    while(scanf("%d", &a) != EOF){
        int k = 1;
        if(a <= 31){
            long long result = k << a;
            printf("%lld\n", result);
        }
        else
            printf("Value of more than 31\n");
    }
}