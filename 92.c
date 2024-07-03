#include <stdio.h>
int main()
{
    int money, hunder = 0, fifty = 0, twenty = 0, ten = 0, five = 0, one = 0;
    scanf("%d", &money);
    if (money >= 100)
    {
        hunder = money / 100;
        money %= 100;
    }
    if (money >= 50)
    {
        fifty = money / 50;
        money %= 50;
    }
    if (money>=20) 
    {
        twenty = money / 20;
        money %= 20;
    }
    if (money>=10)
    {
        ten = money / 10;
        money %= 10;
    }
    if (money>=5)
    {
        five = money / 5;
        money %= 5;
    }
    if (money>=1)
    {
        one = money / 1;
    }
    printf("%d %d %d %d %d %d", hunder, fifty, twenty, ten, five, one);

    return 0;
}