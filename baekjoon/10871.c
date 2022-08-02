#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

    int N, X;
    scanf("%d %d", &N, &X);

    for (int i=0; i<N; i++){
        int tmp;
        scanf("%d", &tmp);
            if(tmp<X){
                printf("%d", tmp);
                printf(" ");
            }
    }

    return 0;
}