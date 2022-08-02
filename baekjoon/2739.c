#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

    int a;
    scanf("%d", &a);

    if(1<=a && a<=9){
        for(int i=1; i<10; i++){
            printf("%d*%d=%d\n", a,i,a*i);
        }
    }
    else{
        printf("error");
    }

    return 0;
}