#include <stdio.h>

int main(void)
{

int temp;
int x=10;
int y=20;

printf("입력된 상수: x=%d, y=%d\n", x, y);

temp=x;
x=y;
y=temp;

printf("교환된 결과 : x=%d, y=%d\n", x, y);

return 0;

}