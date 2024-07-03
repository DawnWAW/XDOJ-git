#include <stdio.h>
int odd = 0;
int even = 0;
int mod4but3 = 0;
void check(int num);
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i <= n * n; i++)
    {
        check(i);
    }
    printf("%d %d %d\n%d", odd, even, mod4but3, odd + even);
    return 0;
}
void check(int num)
{
    if (num % 2 == 0)
    {
        even++;
    }
    else
        odd++;
    if (num % 4 == 0 && num % 3 != 0)
    {
        mod4but3++;
    }
}