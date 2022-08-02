#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
double f_rand(void);

int main(void)
{
    int i;
    srand((unsigned)time(NULL));
    for(i=1;i<=5;i++)
    {
    printf("%lf ", f_rand());
    }
    return 0;
}
double f_rand(void)
{
    double s;
    s = rand()/(double)RAND_MAX;
    return s;
}