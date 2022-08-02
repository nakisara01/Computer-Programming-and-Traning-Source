#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_leaf(int y);

int main(void){
	int y;
	printf("연도를 입력하시오: ");
	scanf("%d", &y);

	if(is_leaf(y)){
		printf("%d년은 366일입니다.", y);
	}
	else{
		printf("%d년은 365일입니다.", y);
	}
}

int is_leaf(int y){
	if(y%4==0 && y%100!=0 || y%400==0){
		return 1;
	}
	else{
		return 0;
	}
}