#include <stdio.h>
#include<string.h>
void bubble(char arr[], int len)
{
    int i, j;
    char temp;
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
int main()
{
    char str[100];
    gets(str);
    bubble(str, strlen(str));
    str[strlen(str)] = '\0';
    puts(str);
    return 0;
}