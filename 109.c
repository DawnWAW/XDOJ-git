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
    char str[201], left[101] = {'\0'}, right[101] = {'\0'};
    int firstchar, cnt1 = 0, cnt2 = 0;
    scanf("%200s", str);
    firstchar = str[0];
    char *p = str;
    while (*++p != '\0')
    {
        if (*p > firstchar)
        {
            left[cnt1++] = *p;
        }
        else// (*p <= firstchar)
        {
            right[cnt2++] = *p;
        }
    }
    left[cnt1] = firstchar;
    //right[cnt2] = firstchar;
    bubble(right, strlen(right));
    char output[201];
    strcpy(output, left);
    strcat(output, right);
    puts(output);
    return 0;
}