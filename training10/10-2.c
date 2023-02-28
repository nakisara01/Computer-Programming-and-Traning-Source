#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

enum shape_type {TRIANGLE, RECTANGLE, CIRCLE};

struct shape
{
    enum shape_type type;

    union{
        struct {
            int base;
            int height;
        } tri;
        struct {
            int width;
            int height;
        } rect;
        struct {
            int radius;
        } cric;
    } p;
};

int main(){
    struct shape s;
    enum shape_type type;
    int num;

    printf("도형의 타입을 입력하시오(0-TRIANGLE, 1-RECTANGLE, 2-CIRCLE): ");
    scanf("%d", &s.type);

    switch (s.type)
    {
    case TRIANGLE:
        printf("밑변과 반지름을 입력하시오(예를 들어서 10 20): ");
        scanf("%d %d", &s.p.tri.base, &s.p.tri.height);

        printf("면적은 %d", s.p.tri.base*s.p.tri.height/2);
        break;
    case RECTANGLE:
        printf("가로와 세로의 길이를 입력하시오(예를 들어서 10 20): ");
        scanf("%d %d", &s.p.rect.width, &s.p.rect.height);

        printf("면적은 %d", s.p.rect.width*s.p.rect.height);
        break;
    case CIRCLE:
        printf("반지름을 입력하시오(예를 들어서 10): ");
        scanf("%d", &s.p.cric.radius);

        printf("면적은 %d", (int)(s.p.cric.radius*s.p.cric.radius*M_PI));
        break;
    default:
        printf("도형의 타입이 잘못 선택되었습니다.");
    }
    return 0;
}
