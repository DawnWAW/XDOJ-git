#include <stdio.h>
int main()
{
    char key[8];
    gets(key);
    for (int i = 0; i < 7; i++)
    {
        if (key[i] >= 'a' && key[i] <= 'z')
        {
            key[i] = 27 + 96 - (key[i] - 96);
        }
        else if (key[i] >= 'A' && key[i] <= 'Z')
        {
            key[i] = 27 + 64 - (key[i] - 64);
        }
    }
    puts(key);
    return 0;
}