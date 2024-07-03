#include <stdio.h>
#include <string.h>
int main()
{
    char str[41];
    gets(str);
    char *p = str;
    char token[40];
    int lengthOfToken = 0;
    while (*p != '\0')
    {
        if (*p == '(' || *p == ')' || *p == '*' || *p == '/')
        {
            printf("%c\n", *p);
        }
        else if (*p == '+' || *p == '-')
        {
            if ((*(p - 1) < '0' || *(p - 1) > '9') && *(p - 1) != ')')
            {
                token[lengthOfToken++] = *p;
            }
            else
            {
                printf("%c\n", *p);
            }
        }
        else if ((*p >= '0' && *p <= '9') || *p == '.')
        {
            token[lengthOfToken++] = *p;
            if ((*(p + 1) < '0' || *(p + 1) > '9') && *(p + 1) != '.')
            {
                token[lengthOfToken] = '\0';
                printf("%s\n", token);
                lengthOfToken = 0;
            }
        }
        p++;
    }
    return 0;
}