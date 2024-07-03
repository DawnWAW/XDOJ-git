#include <stdio.h>
#include <string.h>
int main()
{
    char str1[21];
    char str2[21];
    gets(str1);
    gets(str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int matchBox[20][20];
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (str1[i] == str2[j])
            {
                if (i == 0 || j == 0)
                {
                    matchBox[i][j] = 1;
                }
                else
                {
                    matchBox[i][j] = matchBox[i - 1][j - 1] + 1;
                }
            }
            else
                matchBox[i][j] = 0;
        }
    }
    int position = -3;
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (matchBox[i][j] == len2)
            {
                position = ((i - len2 > position) ? i - len2 : position);
            }
        }
    }
    if (position == -3)
    {
        printf("NO!");
    }
    else
        printf("%d", position + 2);
    return 0;
}