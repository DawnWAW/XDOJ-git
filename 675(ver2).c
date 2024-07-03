#include <stdio.h>
#include <time.h>
void isTriangle();
void combination(int n);
int countsOfTriangle = 0;
int lines[1000];
int threeLines[3];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &lines[i]);
    }
    // 边的个数不超过三条无法构成三角形
    if (n < 3)
    {
        printf("0");
        return 0;
    }
    clock_t begin, end;
    begin = clock();
    combination(n);
    end = clock();
    printf("%d %.6f", countsOfTriangle, (double)(end - begin) / CLOCKS_PER_SEC);
    return 0;
}
void isTriangle()
{
    int a = threeLines[0];
    int b = threeLines[1];
    int c = threeLines[2];
    if (a + b > c && a + c > b && b + c > a)
    {
        countsOfTriangle++;
        printf("yes");
        return;
    }
    printf("no");
    return;
}
void combination(int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        int cnt = 0;
        int i1 = i;
        while (i1 != 0)
        {
            i1 = i1 & (i1 - 1);
            cnt++;
        }
        if (cnt == 3)
        {
            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                {
                    threeLines[--cnt] = lines[j];
                    printf("%d ", lines[j]);
                }
            }
            isTriangle();
            printf("\n");
        }
    }
}
