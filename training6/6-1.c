#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_alpha(char c);

int main(void){
	char c;
	printf("문자를 입력하시오:");
	scanf("%c", &c);

	if(check_alpha(c)){
		printf("%c는 알파벳 문자입니다.", c);
	}
	else{
		printf("%c는 알파벳 문자가 아닙니다.", c);
	}
	return 0;
}	

int check_alpha(char c){
	if((c>=65 && c<=90) || (c >= 97 && c <= 122)){
		return 1;
	}
	else{
		return 0;
	}
}