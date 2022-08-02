#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    FILE* fp1, * fp2;
    char fname1[100], fname2[100], buffer1[1024], buffer2[1024];

    printf(" 첫번째 파일: "); scanf("%s", fname1);
    printf(" 두번째 파일: "); scanf("%s", fname2);

    if ((fp1 = fopen(fname1, "r")) == NULL || (fp2 = fopen(fname2, "r")) == NULL) { 
        printf(" 파일을 열수 없습니다.");
        return 0;
    }

    while (1) {
        char* p1 = fgets(buffer1, 1000, fp1);
        char* p2 = fgets(buffer2, 1000, fp2);
    
        if (p1 == NULL || p2 == NULL)
            break;
    
        if (strcmp(buffer1, buffer2) != 0) {
            printf("<< %s", buffer1);
            printf(">> %s", buffer2);
        } 
    }

    fclose(fp1);
    fclose(fp2);

    return 0; 
}