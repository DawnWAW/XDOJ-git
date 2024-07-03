#include <stdio.h>
int main()
{
    int mostTime = 0;
    int numAppearMost = 10000;
    int hashTable[10001] = {0};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        hashTable[num]++;
        if (hashTable[num] == mostTime)
        {
            numAppearMost = ((numAppearMost < num) ? numAppearMost : num);
        }
        else if (hashTable[num] > mostTime)
        {
            mostTime = hashTable[num];
            numAppearMost = num;
        }
    }
    printf("%d", numAppearMost);
    return 0;
}