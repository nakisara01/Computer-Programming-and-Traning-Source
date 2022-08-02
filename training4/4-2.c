#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
int h, a;

printf("키와 나이를 입력해주세요: ");
scanf("%d %d", &h, &a);

if (h >= 140 && a >= 10)
printf("탑승할 수 있습니다");
else 
printf("탑승할 수 없습니다");

return 0;
}