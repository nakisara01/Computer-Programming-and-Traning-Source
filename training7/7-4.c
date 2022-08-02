#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void show_binary(int n);

int main() {
	int n =1;

	while (n != -1) {
		printf("10진수를 입력하시오: ");
		scanf("%d", &n);
		if(n != -1)
		show_binary(n);
	}

	return 0;
}

void show_binary(int n) {

	int binary[32] = { 0 };
	int num = 0;
	printf("%d의 2진수 표시:", n);

	while (1)
	{
		binary[num] = n % 2;    
		n = n / 2;             

		num++;    

		if (n == 0)    
			break;
	}

	for (int i = num-1; i >= 0; i--) {
		printf("%d", binary[i]);
	}
	printf("\n");

}