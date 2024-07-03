#include<stdio.h>
void isPrime(int n)
{
    int flag = 0;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("YES");
    }
    else
    {
        printf("No");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    isPrime(n);
    return 0;
}
