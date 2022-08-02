#include <stdio.h>

int main(void)
{
    int a;
    int b;

    printf("정수를 입력하세요: ");
    scanf("%d", &a);

    b=~a;
    b+=1;

    printf("10의 2의 보수(10진수): %d\n", b);

    printf("10의 2의 보수(16진수): %#X\n", b);
    
    return 0;
}