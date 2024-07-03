#include <stdio.h>
int main()
{
    int day, month, year;
    scanf("%d %d", &year, &month);
    year = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? 1 : 0;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day = 31;
        break;

    case 2:
        if (year == 1)
        {
            day = 29;
        }
        else
        {
            day = 28;
        }
        break;

    default:
        day = 30;
        break;
    }
    printf("%d", day);

    return 0;
}