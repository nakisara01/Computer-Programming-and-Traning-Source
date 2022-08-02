#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define SIZE 100

void flip_str(char* s);

int main() {

   char arr[SIZE];
   printf("문자열을 입력:");
   gets(arr);
   flip_str(arr);
   printf("%s", arr);

   return 0;
}

void flip_str(char* s) {

   int a = 0;
   a = strlen(s);
   for (int i = 0; i < a; i++) {
      if (65 <= s[i] && s[i] <= 90)
         s[i] += 32;
      else if(97<= s[i] && s[i] <= 122)
         s[i] -= 32;
   }
}