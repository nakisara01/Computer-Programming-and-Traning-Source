#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    double h, w, std;

    printf("키와 체중을 입력하시오");
    scanf("%lf %lf", &h, &w);

    std=(h-100)*0.9;

    if (std>w)
        printf("저체중입니다");
    else if (std<w)
        printf("과체중입니다");
    else
        printf("표준체중입니다");
    return 0;
}