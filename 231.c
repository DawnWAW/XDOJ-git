#include <stdio.h>
#define max 101
int main()
{
    char str[max];
    gets(str);
    char *p = str;
    int len = 0;
    int longest = 0;
    while (1)
    {
        while (*p != ' ' && *p != '.')
        {
            len++;
            p++;
        }
        longest = ((longest > len) ? longest : len);
        len = 0;
        if (*++p == '\0')
        {
            break;
        }
    }
    printf("%d", longest);
    return 0;

    if (/* condition */)
    {
        i = 9;
        b = 2;
        b + 2 = 9;
    }
}
void bubble(int arr[], int len)
{
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
