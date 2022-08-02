#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {

   char s[200] = { 0 }, target[200] = { 0 }, find[30] = { 0 }, replace[30] = { 0 };
   char* seps;

   printf("문자열을 입력:");
   gets(s);
   printf("찾을 단어:");
   gets(find);
   printf("바꿀 단어:");
   gets(replace);

   seps = strtok(s, " ");
   
   while (seps != NULL) {
      
      if (strcmp(seps, find) == 0)
         strcat(target, replace);
      else
         strcat(target, seps);
      strcat(target, " ");
      seps = strtok(NULL, " ");

   }
   printf("변환된 문자열:%s", target);

   return 0;
}