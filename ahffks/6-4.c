#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void sum(int x, int y)
{
    double sum=x+y;
    printf("두 수의 합은 %lf", sum);
}
void subtract(int x, int y)
{
    double subtract=x-y;
    printf("두 수의 합은 %lf", subtract);
}
void multiply(int x, int y)
{
    double multiply=x*y;
    printf("두 수의 합은 %lf", multiply);
}
void divide(int x, int y)
{
    double divide=x/y;
    printf("두 수의 합은 %lf", divide);
}
void remain(int x, int y)
{
    double remain=x%y;
    printf("두 수의 합은 %lf", remain);
}

int main(void)
{
    
    printf(" 1. 덧셈\n 2. 뺄셈\n 3. 곱셈\n 4. 나눗셈\n 5. 나머지\n 원하는 메뉴를 선택하시오(1-5):");
    double n;
    scanf("%lf", &n);
    printf("숫자 2개를 입력하시오:");
    double x, y;
    scanf("%lf %lf", &x, &y);
    if(n==1)
    {
        sum(x, y);
    }
    else if(n==2)
    {
        subtract(x,y);
    }
    else if(n==3)
    {
        multiply(x,y);
    }
    else if(n==4)
    {
        divide(x,y);
    }
    else
    {
        remain(x,y);
    }
}