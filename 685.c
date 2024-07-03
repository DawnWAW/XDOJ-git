#include <stdio.h>
char str[100];
char str_[100];
void bubbleSort(int strLength)
{
    for (int i = 0; i < strLength - 1; i++)
    {
        for (int j = 0; j < strLength - 1 - i; j++)
        {
            if (str_[j] > str_[j + 1])
            {
                char temp = str_[j];
                str_[j] = str_[j + 1];
                str_[j + 1] = temp;
            }
        }
    }
}
int main()
{
    gets(str);
    int str_Length = 0;
    char *p = str;
    while (*p != '\0')
    {
        if (*p == '*')
        {
            p++;
            continue;
        }
        str_[str_Length++] = *p++;
    }
    bubbleSort(str_Length);
    puts(str_);
    return 0;
}