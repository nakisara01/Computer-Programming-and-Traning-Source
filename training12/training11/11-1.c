#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    FILE* fp1, * fp2;
    char fname1[100], fname2[100];

    printf("첫번째 파일: "); 
    scanf("%s", fname1);

    printf("두번째 파일: "); 
    scanf("%s", fname2);

    fp1 = fopen(fname1, "r");
    fp2 = fopen(fname2, "w");

    if (fp1 == NULL) {
        printf("파일을 열 수 없습니다");
    }
    if (fp2 == NULL) {
        printf("파일을 열 수 없습니다");
    }

    char c;

    while (1) {
        c = fgetc(fp1);

        if (c == EOF)
            break;

        else if (islower(c) && isalpha(c)) {
            fputc(toupper(c), fp2);
            printf("%c", toupper(c));
        }
        else
            printf("%c", c);
    }

    fclose(fp1);
    fclose(fp2);
    return 0; 
}