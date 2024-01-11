#include <stdio.h>

int main(){
    int arr[7];
    int size = 6;
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = size - 1; i >= 0; i--){
        if(i == 0)
            printf("%d\n", arr[i]);
        else
            printf("%d ", arr[i]);
    }
}