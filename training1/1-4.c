#include<stdio.h>

int main(void) {

	float f;
    float c;

	printf("화씨값을 입력하시오: ");
    scanf("%f", &f);

	c = 5*(f-32)/9;

	printf("변환된 섭씨값: %f \n", c);

	return 0;

}