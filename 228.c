#include <stdio.h>
#include <string.h>

void fun(char s[], char t[])
{
    int i, j = 0;
    for (i = 0; i < strlen(s); i++)
    {
        t[j++] = s[i++];
    }
    t[j] = '\0';
}

int main()
{
    char s[100], t[100];
    scanf("%s", s);
    fun(s, t);
    printf("%s", t);
    return 0;
}
/*
#include<stdio.h>
void fun(char s[],char t[]){
    int count = 0;
    for (int i = 0;; i+=2)
    {
        if (s[i]=='\0')
        {
            t[count] = '\0';
            break;
        }
        t[count++] = s[i];
    }

}
int main(){
    char s[1000], t[1000];
    scanf("%s",&s);
    fun(s, t);
    printf("%s",t);
    return 0;
}

*/