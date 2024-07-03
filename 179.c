#include <stdio.h>
int main()
{
    int year;
    double money;
    scanf("%lf %d", &money, &year);
    for (int i = 0; i < ((year <= 20) ? year : 20); i++)
    {
        if (money < 5)
        {
            money *= 1.03;
        }
        else if (money < 20)
        {
            money *= 1.035;
        }
        else if (money < 50)
        {
            money *= 1.04;
        }
        else if (money < 200)
        {
            money *= 1.045;
        }
        else
        {
            money *= 1.05;
        }
    }
    printf("%.2lf", money);
    return 0;
}