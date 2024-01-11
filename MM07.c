#include <stdio.h>

int main(){
    int a;
    while(scanf("%d", &a) != EOF){
        long long doublea = a * a;
        long long triplea = doublea * a;
        printf("%d %lld %lld\n", a, doublea, triplea);
    }
}