#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void round()
{
    printf("실수를 입력하시오:");
    double x;
    scanf("%lf", &x);
    int sum=x+0.5;
    printf("반올림한 값은 %d입니다", sum/1);
} 

int main()
{
    round();

    return 0;
}