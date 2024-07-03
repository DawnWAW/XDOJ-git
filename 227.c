#include <stdio.h>
int fun(char list[])
{
    int end;
    for (int i = 0;; i++)
    {
        if (list[i] == '\0')
        {
            end = i;
            break;
        }
    }
    int count_char = 0;
    for (int i = 0; i < end; i++)
    {
        if ((list[i] >= 'a' && list[i] <= 'z') || (list[i] >= 'A' && list[i] <= 'Z'))
        {
            count_char++;
        }
    }
    return count_char;
}
int main()
{
    char list[1000];
    scanf("%s",&list);
    printf("%d",fun(list));
    return 0;
}