#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include<stdio.h>

void printf_array(int arr[], int size);
int compare_array(int arr1[], int arr2[], int size);

int main() {

   int a[SIZE] = { 3,7,2,10,5 };
   int b[SIZE] = { 3,7,2 };
   int c[SIZE] = { 40,65,11,90,88 };
   int d[SIZE] = { 40,65,11,90,88 };


   printf("배열 a: ");
   printf_array(a, SIZE);
   printf("배열 b: ");
   printf_array(b, SIZE);
   if (compare_array(a, b, SIZE) == 1)
      printf("2개의 배열은 같음\n");
   else
      printf("2개의 배열은 다름\n");
   printf("배열 c: ");
   printf_array(c, SIZE);
   printf("배열 d: ");
   printf_array(d, SIZE);
   if (compare_array(c, d, SIZE) == 1)
      printf("2개의 배열은 같음\n");
   else
      printf("2개의 배열은 다름\n");


   return 0;
}

void printf_array(int arr[], int size) {
   for (int i = 0; i < size; i++) {
      
      printf("%d ", arr[i]);
   }
   printf("\n");
}

int compare_array(int arr1[], int arr2[], int size) {
   for (int i = 0; i < size; i++) {
      if (arr1[i] != arr2[i])
         return 0;
   }
   return 1;
}