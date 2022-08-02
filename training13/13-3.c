#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100
#include <stdio.h>
#include <stdlib.h>

typedef struct addr {
    char name[SIZE];
    char phone[SIZE];
} ADDR;

int main(void) {
    ADDR* addrs;
    int num;
    
    printf("주소의 개수: "); 
    scanf("%d", &num);
    
    addrs = (ADDR*)malloc(sizeof(ADDR) * num);
        
    if (addrs == NULL)
        exit(1);
    int i;
        
    for (i = 0; i < num; i++) {
        printf("이름을 입력하시오: "); 
        fflush(stdin);
        gets(addrs[i].name);
        printf("휴대폰 번호를 입력하시오: "); 
        gets(addrs[i].phone);
    }
    printf("==========================\n"); 
    printf("이름\t휴대폰 번호\n"); 
    printf("==========================\n"); 
    
    for (i = 0; i < num; i++)
        printf("%s\t%s\n", addrs[i].name, addrs[i].phone);

    printf("==========================\n");

    free(addrs);
    return 0;
}