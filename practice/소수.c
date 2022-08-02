#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    int i=1, sum=0;
    while(i <= n){
        if(i % 2 ==1)
            sum += i;
        i++;
    }

    printf("1부터 %d까지의 모든 홀수의 합은 %d입니다.", n, sum);
}