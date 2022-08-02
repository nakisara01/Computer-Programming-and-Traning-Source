#define _CRT_SECURE_NO_WARNINGS
#define MIN(x,y) (x)<(y)?(x):(y)
#define GET_MIN(x,y,z) MIN(x,y) > z ? (z) : MIN(x,y)
#include <stdio.h>

int main(void) {

    int x, y, z;
    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d", &x, &y, &z);
    int a = GET_MIN(x,y,z);
    printf("최솟값은 %d입니다.", a);

    return 0;
}