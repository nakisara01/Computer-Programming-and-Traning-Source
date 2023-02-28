#define _CRT_SECURE_NO_WARNINGS
#define RAND_MAX 32767
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    FILE* fp1 = NULL;
    FILE* fp2 = NULL;
    int arr[100];
    char fname1[100], fname2[100];

    printf(" 첫번째 파일: "); 
    scanf("%s", fname1);

    fp1 = fopen(fname1, "wb");

    if (fp1 == NULL) {
        printf(" 파일을 열 수 없습니다");
        exit(1); 
    }

    printf("두번째 파일: ");
    scanf("%s", fname2);

    fp2 = fopen(fname2, "w");

    if (fp2 == NULL) {
        printf("파일을 열 수 없습니다");
        exit(1); 
    }

    srand((unsigned)time(NULL));

    for (int i = 0; i < 100; i++) {
        arr[i] = rand() % RAND_MAX;
        printf("%d", arr[i]);
    }
    
    for (int i = 0; i < 100; i++){
        fprintf(fp1, "%d", arr[i]);
    }

    fwrite(arr, sizeof(double), 100, fp2);
    
    fseek(fp1, 0, SEEK_END);
    int size1;
    size1 = ftell(fp1);
    printf("\nThe size of %s: %d\n", fname1, size1);
    
    fseek(fp2, 0, SEEK_END);
    int size2;
    size2 = ftell(fp2);
    printf("The size of %s: %d\n", fname2, size2);
    
    fclose(fp1);
    fclose(fp2);

return 0;
}