#include <stdio.h>
int main()
{
    int year, day, month, date;
    scanf("%d %d", &year, &day);
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) // rui year
    {
        if (day >= 1 && day <= 60)
        {
            if (day <= 31)
            {
                month = 1;
                date = day;
            }
            else
            {
                month = 2;
                date = day - 31;
            }
        }
        else if (day <= 213)
        {
            if (day <= 91)
            {
                month = 3;
                date = day - 60;
            }
            else if (day <= 121)
            {
                month = 4;
                date = day - 91;
            }
            else if (day <= 152)
            {
                month = 5;
                date = day - 121;
            }
            else if (day <= 182)
            {
                month = 6;
                date = day - 152;
            }
            else
            {
                month = 7;
                date = day - 182;
            }
        }
        else
        {
            if (day <= 244)
            {
                month = 8;
                date = day - 213;
            }
            else if (day <= 274)
            {
                month = 9;
                date = day - 244;
            }
            else if (day <= 305)
            {
                month = 10;
                date = day - 274;
            }
            else if (day <= 335)
            {
                month = 11;
                date = day - 305;
            }
            else
            {
                month = 12;
                date = day - 335;
            }
        }
    }
    else
    {
        if (day >= 1 && day <= 59)
        {
            if (day <= 31)
            {
                month = 1;
                date = day;
            }
            else
            {
                month = 2;
                date = day - 31;
            }
        }
        else if (day <= 212)
        {
            if (day <= 90)
            {
                month = 3;
                date = day - 59;
            }
            else if (day <= 120)
            {
                month = 4;
                date = day - 90;
            }
            else if (day <= 151)
            {
                month = 5;
                date = day - 120;
            }
            else if (day <= 181)
            {
                month = 6;
                date = day - 151;
            }
            else
            {
                month = 7;
                date = day - 181;
            }
        }
        else
        {
            if (day <= 243)
            {
                month = 8;
                date = day - 212;
            }
            else if (day <= 273)
            {
                month = 9;
                date = day - 243;
            }
            else if (day <= 304)
            {
                month = 10;
                date = day - 273;
            }
            else if (day <= 334)
            {
                month = 11;
                date = day - 304;
            }
            else
            {
                month = 12;
                date = day - 334;
            }
        }
    }
    printf("%d %d", month, date);
    return 0;
}