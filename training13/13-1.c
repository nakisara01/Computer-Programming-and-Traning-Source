#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, num;
    int sum = 0;
        
    printf("정수의 개수: "); 
    scanf("%d", &num);
        
    int* arr = (int*)malloc(num * sizeof(int));
    
    for (i = 0; i < num; i++) {
        printf("양의 정수를 입력하시오: "); 
        scanf("%d", &arr[i]);
    }
    
    printf("입력된 양의 정수: ");
    
    for (i = 0; i < num; i++) {
      printf("%d ", arr[i]);
      sum += arr[i];
   }

    for (i = 0; i < num; i++)
        sum += arr[i];

    
    printf("입력된 정수들의 합은 %d입니다.\n", sum); 
    
    return 0;
}