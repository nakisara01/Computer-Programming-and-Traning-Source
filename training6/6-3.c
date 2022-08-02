#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int b_rand (int n);

int main (void)
{
	int n, i;
	srand((unsigned)time(NULL));
	for(i=0; i<10; i++){
		printf("%d ", b_rand(n));
	}
	return 0;
}

int b_rand (int n)
{
	n = rand()%2;
	return n;
}