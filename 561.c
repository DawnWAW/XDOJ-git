#include <stdio.h>
#define max 101
int main()
{
    char str[max];
    char str_new[max * 2] = {'\0'};
    gets(str);
    char *p1 = str;
    char *p2 = str_new;
    while (*p1 != '\0')
    {
        *p2++ = *p1++;
        *p2++ = ' ';
    }
    printf("%s", str_new);
    return 0;
}