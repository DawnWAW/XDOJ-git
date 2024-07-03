#include<stdio.h>
int main()
{
    int a1,b1;
    char b2;
    scanf("%d,%1c",&a1,&b2);
    b1=b2-48;
    printf("%d,%d",a1+b2,a1+b1);
    return 0;
}
