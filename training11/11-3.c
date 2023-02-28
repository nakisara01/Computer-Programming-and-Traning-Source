#define _CRT_SECURE_NO_WARNINGS
#define SIZE 20
#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[100];
    double korean, english, math;
};

int main(){

    struct student s;
    FILE* fp = NULL;
    char fname[100];
    double ksum = 0.0, esum = 0.0, msum = 0.0;

    printf(" 파일명을 입력하시오: "); 
    scanf("%s", fname);

    fp = fopen(fname, "r");

    if (fp == NULL) {
        fprintf(stderr, "파일을 열 수 없습니다.\n");
        exit(1);
    }

    int i;

    for (i = 0; i < SIZE; i++) {

    fread(&s, sizeof(struct student), 1, fp);
    printf(" 이름= %s, 국어= %.1f, 영어= %.1f, 수학= %.1f\n", s.name, s.korean, s.english, s.math);
        ksum += s.korean;
        esum += s.english;
        msum += s.math;
}

    printf(" 평균: 국어= %.2f, 영어= %.2f, 수학= %.2f\n", ksum / SIZE, esum / SIZE, msum / SIZE);

    fclose(fp);
    return 0; 

}