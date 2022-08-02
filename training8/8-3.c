#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10 

void printf_array(int* arr, int size);
int search(int* arr, int size, int x);

int main() {

	int data[SIZE] = { 10,1,24,90,5,33,44,8,77,33 };
	int n = 0, temp;

	printf_array(data, SIZE);

	while (1) {
		printf("검색하는 값 :");
		scanf("%d", &n);
		if (n == -1)
			break;
		temp = search(data, SIZE, n);
		if (temp == -1)
			printf("검색하는 값 %d는 배열 내에 없음\n", n);
		else
			printf("검색하는 값 %d의 배열 내 위치:%d\n", n,temp);

	}

	return 0;
}


void printf_array(int* arr, int size) {
	printf("배열 data:");
	for (int i = 0; i < size;  i++) {
		printf(" %d", *(arr + i));
	}

	printf("\n");

}

int search(int* arr, int size, int x) {

	int result = -1;

	for (int i = 0; i < SIZE; i++) {
		if (x == *(arr + i))
			result = i;
	}
	return result;
}