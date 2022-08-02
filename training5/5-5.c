#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
   printf("정수를 입력하시오: ");

   int x;
   scanf("%d", &x);

   printf("2부터 %d까지의 소수: ", x);

   int i, j;
   for (i = 2; i <= x; i++) {
      for (j = 2; j < i; j++) {
         if (i % j == 0) {
            break;
         }
            
      }

      if (i == j) {
         printf("%d", i);
         printf(" ");
      }
   }

   return 0;
}