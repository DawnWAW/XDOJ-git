#include <stdio.h>
int rootCalculate(int n)
{
    int sum = 0;
    for (; n != 0; n /= 10)
    {
        sum += n % 10;
    }
    if (sum > 9)
        return rootCalculate(sum);
    else
        return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", rootCalculate(n));
    return 0;
}