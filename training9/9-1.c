#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define SIZE 100
void change_space(char s[]);

int main() {

   char arr[SIZE] = { 0 };
   printf("문자열을 입력:");
   gets(arr);
   change_space(arr);   
   printf("%s", arr);

   return 0;
}

void change_space(char s[]) {

   int a, temp;
   a = strlen(s);
   for (int i = 0; i < a; i++) 
   {
      if (s[i] == 32)
         s[i] = ',';
   }
   

}