#include <stdio.h>
int levelJudge(int pm);
int main()
{
    int day, pm[1000];
    double average = 0.0;
    scanf("%d", &day);
    for (int i = 1; i <= day; i++)
    {
        scanf("%d", &pm[i]);
        average = (double)(average + pm[i]);
    }
    printf("%.2lf\n", (double)average / day);
    int level1 = 0, level2 = 0, level3 = 0, level4 = 0, level5 = 0, level6 = 0;
    for (int i = 1; i <= day; i++)
    {
        switch (levelJudge(pm[i]))
        {
        case 1:
            level1++;
            break;
        case 2:
            level2++;
            break;
        case 3:
            level3++;
            break;
        case 4:
            level4++;
            break;
        case 5:
            level5++;
            break;
        case 6:
            level6++;
            break;
        }
    }
    printf("%d %d %d %d %d %d", level1, level2, level3, level4, level5, level6);

    return 0;
}
int levelJudge(int pm)
{
    if (pm >= 0 && pm <= 50)
    {
        return 1;
    }
    else if (pm >= 51 && pm <= 100)
    {
        return 2;
    }
    else if (pm >= 101 && pm <= 150)
    {
        return 3;
    }
    else if (pm >= 151 && pm <= 200)
    {
        return 4;
    }
    else if (pm >= 201 && pm <= 300)
    {
        return 5;
    }
    else
    {
        return 6;
    }
}