#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *compress(char *src)
{
    int cnt = 1, i = 0, j = 0;
    static char str[100];
    int len = strlen(src);
    while (i < len)
    {
        while (src[i] == src[i + 1])
        {
            i++;
            cnt++;
        }
        if (cnt < 3)
        {
            for (int o = 0; o < cnt; o++)
            {
                str[j++] = src[i];
            }
        }
        else
        {
            if (cnt < 10)
            {
                str[j++] = src[i];
                str[j++] = cnt + '0';
            }
            else
            {
                str[j++] = src[i];
                str[j++] = cnt / 10 + '0';
                str[j++] = cnt % 10 + '0';
            }
        }
        cnt = 1;
        i++;
    }
    str[j] = '\0';
    return str;
}
int main()
{
    char src[100];
    scanf("%s", src);

    char *ps = compress(src);

    puts(ps);
    return 0;
}
