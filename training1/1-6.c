#include <stdio.h>

int main()
{
    double weight;
    double mweight;
    
    printf("지구에서의 몸무게를 입력하세요:");
    scanf("%lf", &weight);

    mweight=weight*0.17;
    printf("달에서의 몸무게: %lf", mweight);

    return 0;
}