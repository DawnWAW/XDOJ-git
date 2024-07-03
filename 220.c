#include<stdio.h>
#define max 100
int main(){
    char str[max];
    gets(str);
    char *p = str;
    while (*p!='\0')
    {
        p++;
    }
    int len = (int)(p - str);
    printf("%d",len);
    return 0;
}