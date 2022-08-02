#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
   printf("정수를 입력하시오: ");

   int a;
   scanf("%d", &a);

   int b;
   do {
      b = a % 10;
      printf("%d", b);
      a = a / 10;
   } while (a);

   return 0;
}