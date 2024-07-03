#include <stdio.h>
#define MAX 100
void bubble(int arr[], int len)
{
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
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
    char str[MAX + 1];
    gets(str);
    char *p = str;
    int numberInStr[MAX]={0}, countOfNumber = 0;
    while (*p != '\0')
    {
        if (*p >= '0' && *p <= '9')
        {
            numberInStr[countOfNumber] = numberInStr[countOfNumber] * 10 + *p - '0';
            if (*(p + 1) < '0' || *(p + 1) > '9')
            {
                countOfNumber++;
            }
        }
        p++;
    }
    bubble(numberInStr, countOfNumber);
    for (int i = 0; i < countOfNumber; i++)
    {
        printf("%d ", numberInStr[i]);
    }
    return 0;
}