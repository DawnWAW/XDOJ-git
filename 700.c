#include <stdio.h>
int sumOfList(int begin, int end)
{
    int sum = 0, temp = begin;
    while (temp <= end)
    {
        sum += temp;
        temp += 2;
    }
    return sum;
}
int main()
{
    int end;
    scanf("%d", &end);
    printf("%d %d", sumOfList(1, end), sumOfList(2, end));
    return 0;
}