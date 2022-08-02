#include <stdio.h>

int main(void)
{
    double x;
    double result;

    printf("x의 값을 입력하시오:");
    scanf("%lf",&x);

    result=3*x*x+7*x+11;
    printf("다항식의 결과는:%lf", result);

    return 0;
}