#include <stdio.h>
#include <string.h>
int main()
{
    char target[101], get[100][101];
    int sen, row, cnt = 0;
    scanf("%s %d %d", target, &sen, &row);
    if (sen == 0)
    {
        strupr(target);
    }
    for (int i = 0; i < row; i++)
    {
        char str[101];
        scanf("%s",str);
        if (sen == 0)
            strupr(str);
        if (strstr(str, target) != NULL)
        {
            strcpy(get[cnt++], str);
        }
    }
    for (int i = 0; i < cnt; i++)
    {
        printf("%s\n", get[i]);
    }

    return 0;
}