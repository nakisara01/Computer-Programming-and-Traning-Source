#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#define ARRAY_INT(array,size,value) { for (int i=0;i<size; i++) *(array+i)=value; }
#include <stdio.h>

int main() {

    int n=1;
    int array[SIZE];
    ARRAY_INT(array,SIZE,n);
    printf("[");

    for(int i=0; i<SIZE; i++){
        printf("%d", array[i]);
        if(i<SIZE-1){
            printf(",");
        }
    }
    printf("]");

    return 0;
}