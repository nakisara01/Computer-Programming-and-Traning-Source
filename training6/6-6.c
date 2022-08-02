#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum(int num);

int main()
{
   printf("정수를 입력하시오:");

   int n;
   scanf("%d", &n);

   printf("1부터 %d까지의 합=%d", n, sum(n));
   return 0;
}

int sum(int num)
{
   if (num < 1)
      return 0;
   
   return (num + sum(num - 1));
}