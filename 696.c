#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int value;
    int position;
} num;

int main()
{
    int n;
    num biggest, smallest;
    biggest.value = 0;
    smallest.value = 10000;
    scanf("%d", &n);
    int *list = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
        if (list[i] >= biggest.value)
        {
            biggest.value = list[i];
            biggest.position = i;
        }
        if (list[i] <= smallest.value)
        {
            smallest.value = list[i];
            smallest.position = i;
        }
    }
    int temp = list[0];
    list[0] = smallest.value;
    list[smallest.position] = temp;
    if (list[n - 1] != biggest.value)
    {
        temp = list[n - 1];
        list[n - 1] = biggest.value;
        list[biggest.position] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }

    return 0;
}
