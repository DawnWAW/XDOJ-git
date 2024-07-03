#include <stdio.h>
#include <string.h>
int main()
{
    char position[201];
    char order[5];
    char command[201] = {'\0'};
    scanf("%s", position);
    while (1)
    {
        scanf("%s", order);
        if (strcmp(order, "pwd") == 0)
            break;
        scanf("%s", command);
        int len = strlen(position);
        if (command[0] == '/')
        {
            strcpy(position, command);
        }
        else if (command[0] == '.' && command[1] == '.')
        {

            char *p = position;
            int flag = 0;
            for (int i = 1; i < len; i++)
            {
                if (position[i] == '/')
                {
                    p = &position[i];
                    flag = 1;
                }
            }
            if (flag)
                *p = '\0';
            else
                position[1] = '\0';
        }
        else
        {
            if (position[len - 1] != '/')
            {
                position[len] = '/';
                position[len + 1] = '\0';
            }
            else
                position[len] = '\0';
            strcat(position, command);
        }
    }
    printf("%s", position);
    return 0;
}