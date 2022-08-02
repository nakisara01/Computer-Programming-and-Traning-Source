#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

    int a;
    int result=1;
    scanf("%d", &a);

    for (int i=1; i<=a; i++){
        result*=i;
    }
    printf("%d", result);


    return 0;
}