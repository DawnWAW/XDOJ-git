#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int str[4] = {(a + b) * (a + b), a * a + b * b, (a - b) * (a - b), a * a - b * b};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3 - i; j++)
        {
            int temp;
            if (str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    printf("%d %d", str[3], str[0]);

    return 0;
}