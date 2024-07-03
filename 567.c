#include <stdio.h>
#include <string.h>
void de(char *add);
int judge(char *str, int len);
int main()
{
    char str[1001];
    gets(str);
    int len = strlen(str);
    de(&str[len - 1]);
    len = strlen(str);
    printf("%s\n", str);
    if (judge(str, len))
    {
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}
void de(char *add)
{
    char *p = add;
    switch (*p)
    {
    case 'g':
        if (*--p == 'n')
        {
            if (*--p == 'i')
            {
                *p = '\0';
            }
        }

        break;
    case 'd':
        if (*--p == 'e')
        {
            *p = '\0';
        }

        break;
    case 'y':
        if (*--p == 'l')
        {
            *p = '\0';
        }

        break;
    case 'r':
        if (*--p == 'e')
        {
            *p = '\0';
        }

        break;
    case 's':
        *p = '\0';
        break;
    }
}
int judge(char *str, int len)
{
    char *p1 = str;
    char *p2 = str + len - 1;

    for (int i = 0; i < len / 2; i++)
    {
        if (*p1++ == *p2--)
            ;
        else
            return 0;
    }
    return 1;
}