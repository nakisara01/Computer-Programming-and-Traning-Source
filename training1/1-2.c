#include<stdio.h>

int main(void) {

	double mile;
    double km;

	printf("마일을 입력하시오:");
    scanf("%lf",&mile);

	km = mile*1.609;

	printf("%f마일은 %f미터입니다. \n", mile, km);

	return 0;

}

