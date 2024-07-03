#include <stdio.h>
#include <string.h>
int lengthOfSonstr(char *p)
{
    int len = 1;
    char sonstr[100] = {*p++};
    while (*p != '\0')
    {
        char ch = *p;
        for (int i = 0; i < len; i++)
        {
            if (ch == sonstr[i])
            {
                return len;
            }
        }
        sonstr[len++] = ch;
        p++;
    }
    return len;
}
int main()
{
    char str[101];
    gets(str);
    int lengthOfstr = (int)strlen(str);
    int longestLen = 0;
    for (int i = 0; i < lengthOfstr; i++)
    {
        int len = lengthOfSonstr(str + i);
        longestLen = ((longestLen > len) ? longestLen : len);
    }
    printf("%d", longestLen);
    return 0;
}