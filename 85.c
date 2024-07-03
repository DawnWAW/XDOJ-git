#include <stdio.h>
#include <string.h>
int main()
{
    char str1[101], str2[101];
    int longest = 0;
    //scanf("%s%s", str1, str2);
    gets(str1);
    gets(str2);
    int len1 = strlen(str1), len2 = strlen(str2);

    strlwr(str1);
    strlwr(str2);
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            char *p1 = &str1[i], *p2 = &str2[j];
            int len = 0;
            while (*p1 == *p2 && *p1 != '\0')
            {

                p1++;
                p2++;
                len++;
            }
            longest = ((len > longest) ? len : longest);
        }
    }

    printf("%.3lf", 2.0 * longest / (len1 + len2));
    return 0;
}
