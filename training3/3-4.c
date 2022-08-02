#include <stdio.h>
 
int main()
{
    int x;
    int y;

    printf("2개의 정수를 입력하시오 : ");
    scanf("%d %d", &x, &y);
 
    printf("25<<2의 값: %u\n", x << y); 
    printf("25>>2의 값: %u\n", x >> y);
 
    return 0;
}