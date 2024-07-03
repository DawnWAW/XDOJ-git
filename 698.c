#include <stdio.h>
int list[10000];
int count = 2;
int maximum;
void multiple(int num)
{
    if (num >= 10)
    {
        list[count] = num / 10;
        list[count + 1] = num % 10;
        count += 2;
    }
    else
    {
        list[count++] = num;
    }
}
int main()
{
    scanf("%d %d %d", &list[0], &list[1], &maximum);
    int *ptr = list;
    while (count <= maximum)
    {
        multiple((*ptr) * (*(ptr + 1)));
        ptr++;
    }
    for (int i = 0; i < maximum; i++)
    {
        printf("%d ", list[i]);
    }
    return 0;
}