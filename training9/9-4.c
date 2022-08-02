#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

   char s[100];
   int x, y;
   int i = 0;
   char* op[10] = { 0 };

   printf("수학 연산을 입력:");
   gets(s);
   
   op[i] = strtok(s, " ");
   while (op[i] != NULL) {
      i++;
      op[i] = strtok(NULL, " ");
   }

   x = atoi(op[1]);
   y = atoi(op[2]);
   
   if (strcmp(op[0], "add") == 0) 
      printf("연산의 결과: %d", x + y);
   
   else if (strcmp(op[0], "sub") == 0) 
      printf("연산의 결과: %d", x - y);
   
   else if (strcmp(op[0], "mult") == 0) 
      printf("연산의 결과: %d", x * y);
   
   else if (strcmp(op[0], "div") == 0) 
      printf("연산의 결과: %d", x / y);
   
   return 0;
}