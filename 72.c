#include <stdio.h>
#include <string.h>
int main()
{
    char str[101] = {'\0'}, longstr[101] = {'\0'};
    do
    {
        gets(str);
        if (strcmp(str, "***end***") == 0)
            break;
        if ((int)strlen(str) > (int)strlen(longstr))
        {
            strcpy(longstr, str);
        }
    } while (1);
    printf("%d\n%s", (int)strlen(longstr), longstr);
    return 0;
}