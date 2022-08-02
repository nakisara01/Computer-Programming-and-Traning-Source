#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
int a, b, c, min;

printf("3개의 정수를 입력해주세요:");
scanf("%d %d %d", &a, &b, &c);

if (a > b) {
    if (b > c)
        min = c;
    else
        min = b;
}

else {
    if (a > c)
        min = c;
    else
        min = a;
}

printf("최솟값:%d", min);

return 0;
}