#include <stdio.h>
int digit(int num)
{
    int countOfDigit = 0;
    do
    {
        num /= 10;
        countOfDigit++;
    } while (num != 0);
    return countOfDigit;
}
int main()
{
    int num, squredNum, numTail;
    int digitOfNum;
    scanf("%d", &num);
    numTail = num;
    squredNum = num * num;
    digitOfNum = digit(num);

    for (int i = 0; i < digitOfNum; i++)
    {
        if (numTail % 10 != squredNum % 10)
        {
            printf("%d 0", num);
            return 0;
        }
        numTail /= 10;
        squredNum /= 10;
    }
    printf("%d 1", num);
    return 0;
}