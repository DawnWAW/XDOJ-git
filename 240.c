#include <stdio.h>
#include <string.h>
int digital(int n)
{
    int d = 0;
    do
    {
        n /= 10;
        d++;
    } while (n > 0);
    return d;
}
void transave(int d, char str[])
{
    if (d < 0)
    {
        d *= -1;
        str[digital(d)] = d % 10 + '0';
        str[0] = '-';
        transave((-d) / 10, str);
    }
    else if (d > 0)
    {
        str[digital(d) - 1] = d % 10 + '0';
        transave(d / 10, str);
    }
    else
    {
        str[strlen(str)] = '\0';
        return;
    }
}
int main()
{
    int d;
    scanf("%d", &d);
    char str[11];
    transave(d, str);
    printf("%s", str);
    return 0;
}