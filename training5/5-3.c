#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
   int i, j, k, n = 7;
   for (i = 1; i <= n; i++) {
      for (j = 1; j < i; j++) {
         printf(" ");
      }
         
      for (j = n - i; j >= 0; j--) {
         printf("*");
      }
         
      printf("\n");
   }

   return 0;
}