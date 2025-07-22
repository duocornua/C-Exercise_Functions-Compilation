#include<stdio.h>

int main()
{
    int distance;
    float fare=0;
    char type;
    scanf("%c %d",&type, &distance);

    if(type=='E'){
        fare=3;
    } else if(type=='L'){
        fare=6;
    }
    if(distance < 5){
        fare += distance * 1.5;
    } else if (distance <= 10){
        fare += 5 * 1.5 + (distance - 5) * 1.25;
    } else if (distance >10){
        fare += 5 * 1.5 + 5 * 1.25 + (distance - 10);
    }

    printf("%.2f",fare);

    return 0;
}

s