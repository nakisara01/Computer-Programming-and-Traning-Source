#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char** list;

    int num;

    printf("문자열 개수 입력:");
    scanf("%d", &num);

    while (getchar() != '\n');
    list = (char*)malloc(sizeof(char) * num);
    
    for (int i = 0; i < num; i++) {
        list[i] = (char*)malloc(100 * sizeof(char));
        
        if (list[i] == NULL) {
            printf("malloc() 실패!\n\n");
            exit(1);
        }
        printf("문자열입력: ");
        scanf(" %s", list[i]);
    }
    
    printf("[");

    for (int i = 0; i < num; i++) {
        printf("\"%s\" ", list[i]);
    }
    printf("]");
    return 0;
}