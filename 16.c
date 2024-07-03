#include<stdio.h>
int main()
{
    char c1,c2,c3,c4,c5;
    scanf("%c|%c|%c|%c|%c",&c1,&c2,&c3,&c4,&c5);
    c1+=32;
    c2+=32;
    c3+=32;
    c4+=32;
    c5+=32;
    printf("%c%c%c%c%c!",c1,c2,c3,c4,c5);
    return 0;
}
