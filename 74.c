#include <stdio.h>
int main()
{
    char str[51];
    gets(str);
    char *p = str;
    int small = 0, mid = 0, large = 0;
    while (1)
    {
        switch (*p++)
        {
        case '(':
            small++;
            break;
        case ')':
            small--;
            break;
        case '[':
            mid++;
            break;
        case ']':
            mid--;
            break;
        case '{':
            large++;
            break;
        case '}':
            large--;
            break;
        default:
            break;
        }
        if (*p == '\0')
        {
            break;
        }
    }
    if ((small || mid || large) == 0)
    {
        printf("yes");
    }
    else
        printf("no");
    return 0;
}