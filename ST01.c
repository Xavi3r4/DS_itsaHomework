#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, input;
    while(scanf("%d %d", &n, &input) != EOF){
        int tempInput = input;
        int bitCount = 0;
        while(tempInput > 0){
            tempInput /= n;
            bitCount++;
        }
        char *output = (char *)malloc(sizeof(char) * (bitCount + 1));
        int index = 0;
        while(input){
            int remain = input % n;
            if(n >= 10 && remain >= 10)
                output[index++] = 'A' + remain - 10;
            else
                output[index++] = '0' + remain;
            input /= n;
        }
        for(int i = index - 1; i >= 0; i--){
            printf("%c", output[i]);
        }
        printf("\n");
    }
}