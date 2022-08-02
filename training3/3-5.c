#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("x 좌표를 입력하시오: ");
    scanf(" %d",&x);

    printf("y 좌표를 입력하시오: ");
    scanf(" %d",&y);

    (x>0 && y>0) ? printf("(%d, %d)는 1사분면", x, y) : printf("");
    (x<0 && y>0) ? printf("(%d, %d)는 2사분면", x, y) : printf("");
    (x<0 && y<0) ? printf("(%d, %d)는 3사분면", x, y) : printf("");
    (x>0 && y<0) ? printf("(%d, %d)는 4사분면", x, y) : printf("");

    
  return 0;  
} 