#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int get_dice_face();

int main(void)
{
    srand((unsigned int)time(NULL));
    for(int i=0;i<100;i++)
        get_dice_face();
    return 0;
}

int get_dice_face()
{
    static int one=0, two=0, three=0, four=0, five=0, six=0, call_count=0;
    int random= rand()%6+1;
    if (random==1)
        one++;
    else if(random==2)
        two++;
    else if(random==3)
        three++;
    else if(random==4)
        four++;
    else if(random==5)
        five++;
    else
        six++;
    call_count++;
    if(call_count==100)
    {
        printf("1->%d\n2->%d\n3->%d\n4->%d\n5->%d\n6->%d",one,two,three,four,five,six);
    }
}