#include <stdio.h>
#define max 101
int main()
{
    char str[max];
    gets(str);
    char *p = str;
    int len = 0, len_copy = 0;
    while (*p++ != '\0')
    {
        len++;
    }
    printf("%d", len);
    return 0;
}