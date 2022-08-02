#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
   printf("정수를 입력하시오: ");

   int x;
   scanf("%d", &x);

   int i = 1, sum = 0;
   while (1) {
      if (sum + i > x) {
         break;
      }
      
      sum += i;
      i++;
   }

   printf("1부터 %d까지의 합이 %d입니다.", i - 1, sum);

   return 0;
}