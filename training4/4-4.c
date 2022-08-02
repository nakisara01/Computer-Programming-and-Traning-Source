#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double x, fx;

    printf("x를 입력하시오:");
    scanf("%lf", &x);

    if (x <= 0) 
    fx = x*x - 8 * x + 1;
    else
    fx = 5 * x + 3;

    printf("f(x)의 값은 %f\n", fx);

    return 0;
}