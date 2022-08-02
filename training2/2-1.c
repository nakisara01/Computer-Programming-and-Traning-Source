#include <stdio.h>

int main(void)
{
double x;

printf("실수를 입력하시오:");
scanf("%lf", &x);

printf("실수형식: %lf\n", x);
printf("지수형식: %e\n", x);

return 0;

}