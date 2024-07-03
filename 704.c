#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[51];
    gets(str);
    int sum = 0;
    int flag = 0;
    char *p = str;
    while (*p != '\0')
    {
        if (*p <= '9' && *p >= '0')
        {
            sum += *p - '0';
            if (*p == '0')
                flag = 1;
        }
        else if (isalpha(*p))
        {

            if (isupper(*p))
            {
                *p = tolower(*p);
            }
            if (*p <= 'f' && *p >= 'a')
            {
                sum += *p - 'a' + 10;
            }
        }
        p++;
    }
    if (sum == 0 && flag == 0)
    {
        printf("NO");
    }
    else
        printf("%d", sum);

    return 0;
}