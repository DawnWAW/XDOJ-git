#include <stdio.h>
int main()
{
    char list[1000];
    int end;
    scanf("%s", &list);
    for (int i = 0;; i++)
    {
        if (list[i] == '\0')
        {
            end = i;
            break;
        }
    }
    int count_char = 0, count_int = 0;
    for (int i = 0; i < end; i++)
    {
        if (list[i] >= '0' && list[i] <= '9')
        {
            count_int++;
        }
        else
            count_char++;
    }
    printf("%d,%d", count_char, count_int);
    return 0;
}