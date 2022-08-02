#define _CRT_SECURE_NO_WARNINGS 
#define GET_BIT(n,pos) ((n) >> (pos) & 0x01) 
#include <stdio.h>

void display_bit(int value);

int main(void) {
    int n, move, dis, ans;
    
    printf("정수값을 입력하시오: "); 
    scanf("%d", &n);

    printf("왼쪽 이동은 0, 오른쪽 이동은 1을 입력하시오: "); 
    scanf("%d", &move);

    printf("몇 비트 이동시킬 것인지 입력하시오: "); 
    scanf("%d", &dis);

    printf("이동 전: "); 
    display_bit(n);

    if (move == 0) {
        printf("이동 후: "); ans = (n << dis); 
        display_bit(ans);
    }

    else if (move == 1) {
        printf("이동 후: "); ans = (n >> dis); 
        display_bit(ans);
    }

    return 0; 
}

void display_bit(int value) {

int i, cnt = 0;
    for (i = 31; i >= 0; i--, cnt++) {
        if (cnt == 4) cnt = 0;
            if (GET_BIT(value, i)){ 
                printf("1");
            }
            else printf("0");
    }

    printf("\n"); 
}