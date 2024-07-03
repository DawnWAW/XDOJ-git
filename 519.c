#include <stdio.h>
int main()
{
    char str[101];
    gets(str);
    char strbox[10][101] = {'\0'};
    int row = 0, flag = 0, cnt = 0;
    char *p = str;
    while (*p != '\0')
    {
        if (*p == ' ')
        {
            if (flag&&*(p+1)!=' '&&*(p+1)!='\0')
            {
                row++;
                cnt = 0;
            }
            p++;
            continue;
        }
        else
        {
            strbox[row][cnt++] = *p++;
            flag = 1;
        }
    }
    for (int i = row; i >= 0; i--)
    {
        printf("%s ", strbox[i]);
    }

    return 0;
}