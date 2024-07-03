#include <stdio.h>
#include <string.h>
void bubble(char arr[], int len)
{
    int i, j;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    char str[256] = {'\0'}, opt[256] = {'\0'};
    int cnt = 0, flag = 0;
    gets(str);
    // while (scanf("%c", &str[cnt++]))
    for (int i = 0; i < (int)strlen(str); i++)
    {
        if (str[i] == '-')
        {
            opt[cnt++] = str[i + 1];
            flag = 1;
        }
    }
    bubble(opt, cnt);
    if (flag)
    {
        for (int j = 0; j < cnt; j++)
        {
            if (j == 0 || opt[j] != opt[j - 1])
                printf("-%c ", opt[j]);
        }
    }
    else
        printf("no");

    return 0;
}