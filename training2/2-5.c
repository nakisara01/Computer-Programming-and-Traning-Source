#include<stdio.h>

int main(void) {

char a;

printf("문자를 입력하시오 : ");
scanf("%c", &a);

printf("3개의 후속 문자들: %c %c %c\n", a + 2, a + 4, a + 6);
	
return 0;

}