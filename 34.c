#include <stdio.h>
#include<math.h>
int digital(int n);
int function(int a, int b);
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", function(a, b));
    return 0;
}
int digital(int n)
{
    int d = 0;
    do
    {
        n /= 10;
        d++;
    } while (n > 0);
    return d;
}
int function(int a, int b)
{
    int num[10],  count = 0;
    for (int i = ((a < b) ? a : b); i <= ((a > b) ? a : b); i++)
    {
        if (digital(i)<3)
        {
            continue;
        }
        
        int i1 = i,sum = 0;
        for (int j = 9; j >= 0; j--, i1 /= 10)
        {
            num[j] = i1 % 10;
            sum += pow((double)num[j],digital(i));
        }
        if (i == sum)
            count++;
    }
    return count;
}