#include <stdio.h>
int main()
{
    double degree, pay;
    scanf("%lf", &degree);
    if (degree <= 110)
    {
        pay = 0.5 * degree;
        printf("%.2lf A 0.00", pay);
    }
    else if (degree <= 210)
    {
        pay = 55 + 0.55 * (degree - 110);
        printf("%.2lf B %.2lf", pay, degree - 110);
    }
    else
    {
        pay = 110 + 0.7 * (degree - 210);
        printf("%.2lf C %.2lf", pay, degree - 210);
    }
    
    return 0;
}