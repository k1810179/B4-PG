#include <stdio.h>

void printMaxAndMin(int input[], int size){
    int max = input[0], min = input[0], i = 1;
    for(;i < size; i++){ //maxの探索
        if(max < input[i]){
            max = input[i];
        }
    }
    for(;i < size; i++){ //minの探索
        if(min > input[i]){
            min = input[i];
        }
    }
    printf("max = %d, min = %d", max, min);
}

int main(void){
    int input[] = {7,4,1,2,3,-2};
    int size = sizeof(input) / sizeof(input[0]);
    printMaxAndMin(input, size);
}