#include<stdio.h>

int main(void) 
{
    char c;

    printf("문자를 입력하시오:");
    scanf("%c", &c);

    switch(c)
    {
    case'R':
        printf("Rectangle");
        break;
    case'r':
        printf("Rectangle");
        break;
    case'T':
        printf("Triangle");
        break;
    case't':
        printf("Triangle");
        break;
    case'C':
        printf("Circle");
        break;
    case'c':
        printf("Circle");
        break;
    default:
        printf("Unknown");
        break;
    }
    return 0;

}