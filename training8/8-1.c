#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void get_sum_mult(int x, int y, int* psum, int* mult);

int main() {

	int num1, num2, sum, mult;
	printf("첫번째 정수: ");
	scanf("%d", &num1);
	printf("두번째 정수: ");
	scanf("%d", &num2);
	
	get_sum_mult(num1, num2, &sum, &mult);

	printf("두 정수의 합= %d\n", sum);
	printf("두 정수의 곱= %d", mult);
	
	return 0;
}

void get_sum_mult(int x, int y, int* psum, int* mult) {
	*psum = x + y;
	*mult = x * y;
}