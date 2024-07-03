#include <stdio.h>
#include <string.h>
int main()
{
    char mainstr[21];
    char substr[21];
    char opstr[41];
    gets(mainstr);
    gets(substr);
    int position;
    scanf("%d", &position);
    char *p_main = mainstr + position;
    char *p_op = opstr + position;
    char *p_sub = substr;
    int len_main = (int)strlen(mainstr);
    int len_sub = (int)strlen(substr);
    strcpy(opstr, mainstr);
    while (*p_main != '\0')
    {
        *(p_op + len_sub) = *p_main;
        p_main++;
        p_op++;
    }
    p_op = opstr + position;
    while (*p_sub != '\0')
    {
        *p_op = *p_sub;
        p_sub++;
        p_op++;
    }
    opstr[len_main + len_sub] = '\0';
    puts(opstr);
    return 0;
}