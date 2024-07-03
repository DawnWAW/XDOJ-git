#include<stdio.h>
int main(){
    int sec, day, hour, minute;
    scanf("%d",&sec);
    day = sec / 24 / 60 / 60;
    sec -= day * 24 * 60 * 60;
    hour = sec / 60 / 60;
    sec -= hour * 60 * 60;
    minute = sec / 60;
    sec -= minute * 60;
    printf("%d %d %d %d",day,hour,minute,sec);
    return 0;
}