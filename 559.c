#include <stdio.h>
int digital(int n)
{
    int d = 0;
   do {
        n /= 10;
        d++;
   } while (n > 0);
   return d;
}
int judge(int n)
{
    int num[10];
    int n2 = n * n;
    for (int i = 9; i >= 0; n2 /= 10)
    {
        num[i--] = n2 % 10;
    }
    int tail = 0;
    for (int i = 10 - digital(n); i <= 9; i++)
    {
        tail = tail * 10 + num[i];
    }
    if (tail == n)
        return 1;
    else
        return 0;
}
int main()
{
    int count,n[100];
    scanf("%d",&count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < count; i++)
    {
        if (judge(n[i]))
        {
            printf("%d\n", n[i]);
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}