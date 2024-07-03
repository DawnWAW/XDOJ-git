#include <stdio.h>
#define max 51
int main()
{
    char str[max];
    gets(str);
    // 获取字符串长度
    char *p = str;
    while (*p != '\0')
    {
        p++;
    }
    int len = (int)(p - str);
    // 双向指针
    char *p1 = &str[0], *p2 = &str[len - 1];
    int flag=0;
    for (int i = 0; i < len / 2; i++)
    {
        if (*p1++ != *p2--)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("no");
    }
    else
        printf("yes");
    return 0;
}