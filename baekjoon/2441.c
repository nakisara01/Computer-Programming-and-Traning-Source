#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    for (int i=1; i<=a; ++i){
        
        for(int k=1; k<=i-1; ++k){
            printf(" ");
        }
        for(int j=1; j<=a-i+1; ++j){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}