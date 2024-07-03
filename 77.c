#include <stdio.h>

int main()
{
    char m[10], n[10], a[10], opt;
    int q = 0, p = 0;
    int flag = 0;
    scanf("%s %s %s", &m, &n, &a);
    if (m[0] >= '0' && m[0] <= '9')
    {
        int i = 0;
        flag = 1;
        while (m[i] != '\0')
        {
            q = q * 10 + m[i++] - '0';
        }
    }
    else
        opt = m[0];
    if (n[0] >= '0' && n[0] <= '9')
    {
        int i = 0;
        while (n[i] != '\0')
        {
            if (flag)
            {
                p = p * 10 + n[i++] - '0';
            }
            else
            {
                q = q * 10 + n[i++] - '0';
            }
        }
    }
    else
        opt = n[0];
    if (a[0] >= '0' && a[0] <= '9')
    {
        int i = 0;
        while (a[i] != '\0')
        {
            p = p * 10 + a[i++] - '0';
        }
    }
    else
        opt = a[0];
    if (opt == '+')
        printf("%d", q + p);
    if (opt == '-')
        printf("%d", q - p);
    if (opt == '*')
        printf("%d", q * p);
    if (opt == '/')
        printf("%d", q / p);
    if (opt == '%')
        printf("%d", q % p);
    return 0;
}