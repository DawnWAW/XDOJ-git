#include <stdio.h>
int countsOfTriangle = 0;
int lines[1000];
void isTriangle(int position)
{
    int a = lines[position];
    int b = lines[position + 1];
    int c = lines[position + 2];
    if (a + b > c && a + c > b && b + c > a)
    {
        countsOfTriangle++;
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &lines[i]);
    }
    if (n < 3)
    {
        printf("0");
        return 0;
    }
    for (int i = 0; i < n - 2; i++)
    {
        isTriangle(i);
    }
    printf("%d", countsOfTriangle);

    return 0;
}

