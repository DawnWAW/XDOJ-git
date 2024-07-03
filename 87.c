#include <stdio.h>
int main()
{
    int step, score = 0, combo = 0;
    while (1)
    {
        scanf("%d", &step);
        switch (step)
        {
        case 1:
            combo = 0;
            score += 1;
            break;
        case 2:
            combo++;
            score += 2 * combo;
            break;

        default:
            break;
        }
        if (step == 0)
        {
            break;
        }
    }
    printf("%d", score);

    return 0;
}