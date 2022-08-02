#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int A, B, C, reward;
    scanf("%d %d %d", &A, &B, &C);

    if (A==B && B==C){
        reward=10000+A*1000;
    }
    else if(A==B){
        reward=1000+A*100;
    }
    else if(B==C){
        reward=1000+B*100;
    }
    else if(C==A){
        reward=1000+C*100;
    }
    else{
        if(A>B && A>C)
            reward=A*100;
        else if(B>C)
            reward=B*100;
        else
            reward=C*100;
    }
    printf("%d", reward);

    return 0;
}