#include <stdio.h>

int main(){
    unsigned long long arr[7];
    int size = 6;
    unsigned long long sum = 0;
    for(int i = 0; i < size; i++){
        scanf("%llu", &arr[i]);
        unsigned long long tmp = arr[i] * arr[i];
        sum += (tmp * arr[i]);
    }
    printf("%llu\n", sum);
}