#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double f_rand()
{
    double i, s = RAND_MAX;
    for(i=0;i<5;i++)
        printf("%lf\n", rand()/s);
    return rand()/s;
}

int main()
{
    srand((unsigned int) time(NULL));
    f_rand();
    return 0;
}