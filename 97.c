#include<stdio.h>
int main(){
    char a = 'a', z = 'z';
    for (int i = 0; i < 26; i++)
    {
        printf("%c ", a + i);
    }
    printf("\n");
    for (int i = 0; i < 26; i++)
    {
        printf("%c ", z - i);
    }

    return 0;
}