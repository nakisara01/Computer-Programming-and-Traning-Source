#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print_array(int m[], int size);
void set_max_ptr(int m[], int size, int **pmax);

int main() {
	int m[] = {3,8,1,2,10,25,7,6};
	int* pmax;
	print_array(m, sizeof(m)/sizeof(m[0]));

	set_max_ptr(m, sizeof(m) / sizeof(m[0]), &pmax);

	printf("가장 큰 값은 %d", pmax);



	return 0;
}

void print_array(int m[], int size) {
	printf("배열 m: ");
	for (int i = 0; i < size; i++) {
		printf(" %d", m[i]);
	}
	printf("\n");
}

void set_max_ptr(int m[], int size, int** pmax) {
	int max = -1;

	for (int i = 0; i < size; i++) {
		if (max < m[i])
			max = m[i];
	}
	*pmax = max;
}