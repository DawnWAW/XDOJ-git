#include <stdio.h>
#include <string.h>
int main()
{
    char s[101], t[101];
    scanf("%s%s", s, t);
    char *p = strstr(s, t);
    if (strstr(s, t) == NULL)
        printf("-1");
    else
    {
       
        printf("%d", p-&s[0]);
    }
    return 0;
}