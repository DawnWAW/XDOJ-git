#include <stdio.h>
int gcd(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d", gcd(a, b), lcm(a, b));
    return 0;
}