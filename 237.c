#include <stdio.h>
#define max 51
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
    int n;
    scanf("%d", &n);
    if (n > len)
    {
        printf("error");
        return 0;
    }
    char str_copy[max] = {'\0'};
    p = &str[n - 1];
    while (*p != '\0')
    {
        str_copy[len_copy++] = *p++;
    }
    printf("%s", str_copy);
    return 0;
}