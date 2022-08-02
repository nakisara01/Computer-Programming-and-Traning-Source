#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_score(int score[][3]);
void find_test_stat(int score[][3]);

int main(void){
    srand((unsigned)time(NULL));

    int score[10][3];

    for(int i = 0; i < 10; i++){
        for(int s = 0; s <3; s++){
            score[i][s] = rand()%100 + 1;
        }
    }
    
    print_score(score);
    find_test_stat(score);
    return 0;
}

void print_score(int score[][3]){
    for(int i = 0; i < 10; i++){
        printf("학생 %d의 성적: ", i+1);
        for(int s = 0; s < 3; s++){
            printf("%d\t", score[i][s]);
        }
        printf("\n");
    }
}

void find_test_stat(int score[][3]){
    int max, min;
    for(int i = 0; i < 3; i++){
        max = min = score[0][i];
        for(int s = 1; s < 10; s++){
            if(max < score[s][i])
                max = score[s][i];
            else if(min > score[s][i])
                min = score[s][i];
        }
        printf("시험 %d의 최고점수 = %d\n", i+1 , max);
        printf("시험 %d의 최저점수 = %d\n", i+1 , min);
    }
}