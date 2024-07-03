#include <stdio.h>
#include<stdlib.h>
typedef struct
{
    int son;
    int mom;
} fraction;
int gcd(int a, int b);
int lcm(int a, int b);
fraction reduction(fraction f);
fraction fractionCalculate(fraction f1, fraction f2, int symbol);
int main()
{
    fraction f1, f2, sum, dec;
    scanf("%d %d", &f1.son, &f1.mom);
    scanf("%d %d", &f2.son, &f2.mom);
    sum = fractionCalculate(f1, f2, 1);
    dec = fractionCalculate(f1, f2, 0);
    sum=reduction(sum);
    dec=reduction(dec);
    printf("%d %d\n%d %d", sum.son, sum.mom, dec.son, dec.mom);
    return 0;
}
int gcd(int a, int b)
{
    
    if (a % b == 0)
        return b;

    else
        return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
fraction reduction(fraction f){
    int gcd_f = abs(gcd(f.son, f.mom));
    f.son /= gcd_f;
    f.mom /= gcd_f;
    return f;
}
fraction fractionCalculate(fraction f1, fraction f2, int symbol)
{
    fraction f3;
    if (symbol)
    {
        if (f1.mom == f2.mom)
        {
            f3.son = f1.son + f2.son;
            f3.mom = f1.mom;
            return f3;
        }
        else
        {
            f3.mom = lcm(f1.mom, f2.mom);
            f1.son *= f3.mom / f1.mom;
            f2.son *= f3.mom / f2.mom;
            f3.son = f1.son + f2.son;
            return f3;
        }
    }
    else
    {
        if (f1.mom == f2.mom)
        {
            f3.son = f1.son - f2.son;
            f3.mom = f1.mom;
            return f3;
        }
        else
        {
            f3.mom = lcm(f1.mom, f2.mom);
            f1.son *= f3.mom / f1.mom;
            f2.son *= f3.mom / f2.mom;
            f3.son = f1.son - f2.son;
            return f3;
        }
    }
}