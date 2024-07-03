#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[61];
    gets(str);
    char *p = str;
    while (*p != '\0')
    {
        if (isalpha(*p))
        {
            if ((islower(*p) && (*p) + 13 <= 'z') || (isupper(*p) && (*p) + 13 <= 'Z'))
            {
                (*p) += 13;
            }
            else
            {
                (*p) -= 13;
            }
        }
        p++;
    }
    puts(str);
    return 0;
}