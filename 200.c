#include <stdio.h>
#include <string.h>
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, array_cut[10];

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n+1; i++)
    {
        array_cut[i] = array[i];
    }
    for (int i = 0; i < 9 - n; i++)
    {
        array[i] = array[i + n+1];
    }
    for (int i = 0; i < n+1; i++)
    {
        array[9 - n + i] = array_cut[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}