// The same as 151???
#include <stdio.h>
int main()
{
    int interest, award;
    scanf("%d", &interest);
    if (interest <= 100000)
    {
        award = interest * 0.10;
    }
    else if (interest <= 200000)
    {
        award = 10000 + (interest - 100000) * 0.075;
    }
    else if (interest <= 400000)
    {
        award = 10000 + (200000 - 100000) * 0.075 + (interest - 200000) * 0.05;
    }
    else if (interest <= 600000)
    {
        award = 10000 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (interest - 400000) * 0.03;
    }
    else if (interest <= 1000000)
    {
        award = 10000 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000) * 0.03 + (interest - 600000) * 0.015;
    }
    else
    {
        award = 10000 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000) * 0.03 + (1000000 - 600000) * 0.015 + (interest - 1000000) * 0.01;
    }
    printf("%d", (int)award);
    return 0;
}