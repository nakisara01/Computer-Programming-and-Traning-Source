#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

    int minutes, time, plus, added, a, b;

    scanf("%d %d", &time, &minutes);
    scanf("%d", &plus);
    added=minutes+plus;

    if(added>=60){
        a=added/60;
        b=added%60;
        time=time+a;
        minutes=b;
    }
        if(time>23){
            time=time%24;
        }
    else if(added<60)
        minutes=added;

    printf("%d %d", time, minutes);

    return 0;
}
    