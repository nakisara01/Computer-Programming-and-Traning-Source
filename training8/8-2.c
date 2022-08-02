#define _CRE_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10
void printf_array(int *arr, int size);
void coopy_arry(int* arr, int* arr2, int size);

int main() {
	int a[SIZE] = { 3, 7, 25, 10, 5, 1, 85, 100, 10, 8 };
	int b[SIZE] = { 0 };
	
	printf("배열 a: ");
	printf_array(a, SIZE);
	printf("배열 b: ");
	printf_array(b, SIZE);
	coopy_arry(a, b, SIZE);
	printf("복사 후  배열 a: ");
	printf_array(a, SIZE);
	printf("복사 후 배열 b: ");
	printf_array(b, SIZE);

	return 0;
}
void printf_array(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", *(arr + i));

	}
	printf("\n");
}

void coopy_arry(int* arr, int* arr2, int size) {
	for (int i = 0; i < size; i++) {
		*(arr2 + i) = *(arr + i);
	}
}