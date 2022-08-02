#include<stdio.h>

int main(void) {

 double x, y;

 printf("좌표를 입력하시오(x y): ");
 scanf("%lf %lf", &x, &y);

 if (0 < x && 0 < y)
    printf("1사분면\n");
 else if (0 > x && 0 < y)
    printf("2사분면\n");
 else if (0 > x && 0 > y)
    printf("3사분면\n");
 else
    printf("4사분면\n");

 return 0;
}