#include <stdio.h>
int main()
{
    char list[1000];
    int shut = 0;
    scanf("%s", &list);
    for (int i = 0;; i++)
    {
        if (list[i] == '\0')
        {
            shut = i - 1;
            break;
        }
    }

    for (int i = shut; i >= 0; i--)
    {
        printf("%c", list[i]);
    }

    return 0;
}