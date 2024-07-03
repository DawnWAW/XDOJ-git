#include <stdio.h>
int main()
{
    char input[51] = {'\0'}, output[200] = {'\0'};
    int cnt = 0, len = 0;
    scanf("%51s", input);
    input[50] = '\0';
    for (int i = 0;; i++)
    {
        if (input[i] != '\0')
        {
            len++;
        }
        else
            break;
    };
    for (int i = 0; i < len; i++)
    {

        if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z'))
        {
            output[cnt++] = input[i];
        }
        else
        {
            int num = 0;
            char ch = input[i - 1];
            while (1)
            {
                num = num * 10 + input[i] - '0';
                if ((input[i + 1] <= '9' && input[i + 1] >= '0') && i + 1 <= len - 1)
                {
                    i++;
                }
                else
                    break;
            }
            for (int j = 0; j < num - 1; j++)
            {
                output[cnt++] = ch;
            }
        }
    }
    printf("%s\n", output);
    return 0;
}