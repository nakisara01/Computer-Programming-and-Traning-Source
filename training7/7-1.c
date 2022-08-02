#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RMAX 32768

int main(void) {

   int list[10] = {0};
   int max = 0, min = 32767;

   srand((unsigned)time(NULL));

   for (int i = 0; i < 10; i++) {
      
      list[i] = rand() % RMAX;

      if (min > list[i])
         min = list[i];

      else if (max < list[i])
         max = list[i];

      printf("%d ", list[i]);
   }

   printf("\n최대값은 %d\n최소값은 %d", max, min);

   return 0;
}