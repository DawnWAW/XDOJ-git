#include <stdio.h>
int main()
{
    // int num1, num2, num3, num4, num5, num6, num7, num8, num9, num_check;
    // scanf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%1d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num_check);
    // if (num_check == (num1 + num2 * 2 + num3 * 3 + num4 * 4 + num5 * 5 + num6 * 6 + num7 * 7 + num8 * 8 + num9 * 9) % 11)
    // {
    //     printf("Right");
    // }
    // else
    //     printf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%1d", num1, num2, num3, num4, num5, num6, num7, num8, num9, (num1 + num2 * 2 + num3 * 3 + num4 * 4 + num5 * 5 + num6 * 6 + num7 * 7 + num8 * 8 + num9 * 9) % 11);
    char ISBN[14];
    int num_check = 0, cnt = 1;
    gets(ISBN);
    char *p = ISBN;
    while (1)
    {

        if (*p >= '0' && *p <= '9')
        {
            num_check += (cnt++) * (*(p++) - '0');
        }
        else
            p++;
        if (cnt == 10)
        {
            num_check %= 11;
            break;
        }
    }
    if (*(++p) - '0' == num_check || (num_check == 10 && *p == 'X'))
    {
        printf("Right");
    }
    else
    {
        
        ISBN[12] = ((num_check == 10) ? 'X' : (num_check+'0'));
        puts(ISBN);
    }

    return 0;
}