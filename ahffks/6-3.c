#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double get_distance()
{
    printf("첫번째 점의 좌표를 입력하시오 (x,y):");
    double x1, y1;
    scanf("%lf %lf", &x1, &y1);

    printf("두번째 점의 좌표를 입력하시오 (x,y):");
    double x2, y2;
    scanf("%lf %lf", &x2, &y2);

    double distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("두점 사이의 거리는 %f입니다.", distance);
    return distance;
}

int main(void)
{
    get_distance();
    return 0;
}