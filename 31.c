#include <stdio.h>
int listOfIn(int n, int o);
int numberOfIn(int n);
int gcd(int a, int b);
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", gcd(a, b));
    return 0;
}
int listOfIn(int n, int o)
{
    int list[10000], count = 1;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            list[count] = i;
            count++;
        }
    }
    list[count] = n;
    // for (int i = 1; i <= count; i++)
    // {
    //     printf("%d ", list[i]);
    // }
    return list[o];
}
int numberOfIn(int n)
{
    int count = 1;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            // list[count] = i;
            count++;
        }
    }
    return count;
}
int gcd(int a, int b)
{
    int list_a[10000],
        list_b[10000],
        biggest=1;
    if (a==0||b==0)
    {
        if (a==0)
        {
            biggest = b;
        }
        else
        {
            biggest = a;
        }        
    }
    else{
    for (int i = 1; i <= (numberOfIn(a) >= numberOfIn(b) ? numberOfIn(a) : numberOfIn(b)); i++)
    {
        list_a[i] = listOfIn(a, i);
        list_b[i] = listOfIn(b, i);
    }
    for (int i = 1;i<=numberOfIn(a); i++)
    {
        for (int j = 1;j<=numberOfIn(b); j++)
        {
            if (list_a[i]==list_b[j])
            {
                biggest = list_a[i];
            }           
        }
    }
    }
    return biggest;
}
