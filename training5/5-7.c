#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
   printf("실수를 입력하시오: ");
   double r;
   scanf("%lf", &r);

   printf("거듭제곱 횟수를 입력하시오: ");
   int n;
   scanf("%d", &n);

   double result = 1.0;
   int i;
   for (i = 0; i < n; i++) {
      result = result * r;
   }

   printf("결과값은 %lf", result);

   return 0;
}