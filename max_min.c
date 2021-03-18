#include <stdio.h>

void printMaxAndMin(int* input);

int main(void){
    int input[] = {1,2,3};
    int size = sizeof(input);
    printMaxAndMin(input, size);
}

void printMaxAndMin(int* input, int size){
    int max = input[0], min = input[0];
    for(int i = 1;i < size; ++i){
        if(max < input[i]){
            max = input[i];
        }
    }
    for(int i = 1;i < size;++i){
        if(min > input[i]){
            min = input[i];
        }
    }
}