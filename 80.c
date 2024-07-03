#include <stdio.h>
int main()
{
    char target, str[101] = "HelloWorld";
    int sen, cnt = 0;
    target = getchar();
    scanf("%d %100s", &sen, str);
    str[100] = '\0';
    char *p = str;
    while (*p != '\0')
    {
        if (sen == 1 && *p == target)
        {
            cnt++;
        }
        else if (sen == 0 && (*p == target || *p == target + 32 || *p == target - 32))
        {
            cnt++;
        }
        p++;
    }
    printf("%d", cnt);
    return 0;
}