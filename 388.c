#include <stdio.h>
int isAora(char ch);
int main()
{
    char c1, c2, c3, c4, c5;
    int count;
    scanf("%1c %1c %1c %1c %1c", &c1, &c2, &c3, &c4, &c5);
    count = isAora(c1) + isAora(c2) + isAora(c3) + isAora(c4) + isAora(c5);
    printf("%d", count);
    return 0;
}
int isAora(char ch)
{
    if (ch == 'a' || ch == 'A')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
