#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
   printf("정수를 입력하시오:");
   int n;
   scanf("%d", &n);

   int i, j;
   for (i = 1; i <= n; i++) {
      for (j = 0; j < i; j++) {
         printf("%d", j + 1);
         printf(" ");
      }

      printf("\n");
   }

   return 0;
}