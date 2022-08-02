#include <stdio.h> 

int main(void)
{
double i; 
double j;
double k; 
double sum;
double ave;

printf("첫번째 숫자를 입력하시오:");
scanf("%lf", &i);

printf("두번째 숫자를 입력하시오:");
scanf("%lf", &j); 

printf("세번째 숫자를 입력하시오:");
scanf("%lf", &k);

sum=i+j+k;
printf("세 수의 합: %lf\n", sum);

ave=(i+j+k)/3;
printf("세 수의 평균: %lf", ave); 

return 0;
}