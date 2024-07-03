#include <stdio.h>
#include <string.h>
#define Max 51
int main()
{
    int score = 0, flag_Cc = 0, flag_c = 0, flag_num = 0, flag_sym = 0, len;
    char key[Max];
    gets(key);
    len = (int)strlen(key);
    if (len > 0)
    {
        score++;
        if (len > 8)
        {
            score++;
        }
    }
    for (int i = 0; i < len; i++)
    {
        char point = key[i];
        if (point >= '0' && point <= '9')
        {
            flag_num = 1;
        }
        else if (point >= 'a' && point <= 'z')
        {
            flag_c = 1;
        }
        else if (point >= 'A' && point <= 'Z')
        {
            flag_Cc = 1;
        }
        else //if (point >= 33 && point <= 47)
            flag_sym = 1;
    }
    score += (((flag_num + flag_c + flag_Cc + flag_sym - 1) > 0)?(flag_num + flag_c + flag_Cc + flag_sym - 1):0);
    printf("%d", score);
    // printf("%d", (int)strlen(key));
    //  putchar(key[1]);
    //  puts(key);
    return 0;
}
