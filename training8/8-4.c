#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 5

void printf_array2(char* name, int* arr, int size);
void merge(int* arr1, int* arr2, int* arr3, int size);

int main() {
	int a[SIZE] = { 1,3,10,15,34 };
	int b[SIZE] = { 7,11,22,28,40 };
	int c[SIZE * 2] = { 0 };

	merge(a, b, c, SIZE * 2);
	printf_array2("a", a, SIZE);
	printf_array2("b", b, SIZE);
	printf_array2("c", c, SIZE * 2);

	return 0;
}

void printf_array2(char *name, int* arr, int size) {

	printf("배열 %c:", name[0]);
	for (int i = 0; i < size; i++) {
		printf("%d ", *(arr + i));
	}
	printf("\n");

}

void merge(int* arr1, int* arr2, int* arr3, int size) {
	int i = 0,k = 0;
	for (int j = 0; j < size-1; j++) {
		if (*(arr1 + i) < *(arr2 + k)) {
			*(arr3 + j) = *(arr1 + i);
			i++;
		}
		else {
			*(arr3 + j) = *(arr2 + k);
			k++;
		}
	}

	if (i != 5)
		*(arr3 + 9) = *(arr1 + i);
	else
		*(arr3 + 9) = *(arr2 + k);
}