#include <stdio.h>
int countsOfMode = 0;
int array[10000];
void matching(int position)
{
    if (array[position] == 3 && array[position + 1] == 5 && array[position + 2] == 7)
    {
        countsOfMode++;
    }
    return;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n - 2; i++)
    {
        matching(i);
    }
    printf("%d", countsOfMode);
    return 0;
}