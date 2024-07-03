#include <stdio.h>
#include <string.h>
void connect(char a[], char b[], char c[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < strlen(b); i++)
    {
        c[i + strlen(a)] = b[i];
    }
    c[strlen(a) + strlen(b)] = '\0';
}
int main()
{
    char a[1000], b[1000],c[2000];
    scanf("%s %s",&a,&b);
    connect(a, b, c);
    printf("%s", c);
    return 0;
}