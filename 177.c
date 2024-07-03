#include<stdio.h>
int main(){
    int sum = 0;
    char str[100];
    fgets(str, 100, stdin);
    for (int i = 0; str[i]!='\0'; i++)
    {
        sum += (int)str[i];
    }
    sum = sum & 0xFF;
    printf("%d", sum);
    return 0;
}