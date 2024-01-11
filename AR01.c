#include <stdio.h>
#include <string.h>

int main(){
    int inputArr[101] = {0};
    int size = -1;
    while(scanf("%d", &inputArr[++size])){
        char nextChar = getchar();
        if(nextChar == '\n' || nextChar == EOF){
            for(int i = size; i >= 0; i--){
                if(i == 0)
                    printf("%d\n", inputArr[i]);
                else
                    printf("%d ", inputArr[i]);
            }
            size = -1;
            if(nextChar == EOF){
                break;
            }
        }
        
    }
    return 0;
}