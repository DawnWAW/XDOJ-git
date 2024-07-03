#include <stdio.h>
#include <stdlib.h>
#define XMAX 1280
#define YMAX 1024
typedef struct
{
    int x, y;
} Position;
typedef struct
{
    int number;
    Position leftButton;
    Position rightTop;
} Area;
int screen[XMAX + 1][YMAX + 1] = {0};
Area *windows = NULL;
void screenFresh(Area *newWindow);
int main()
{
    int countOfWindows;
    int countOfClicks;
    scanf("%d %d", &countOfWindows, &countOfClicks);
    windows = (Area *)malloc(countOfWindows * sizeof(Area));
    for (int i = 0; i < countOfWindows; i++)
    {
        windows[i].number = i + 1;
        scanf("%d %d %d %d", &windows[i].leftButton.x, &windows[i].leftButton.y, &windows[i].rightTop.x, &windows[i].rightTop.y);
        screenFresh(&windows[i]);
    }
    for (int i = 0; i < countOfClicks; i++)
    {
        Position clickSpot;
        scanf("%d %d", &clickSpot.x, &clickSpot.y);
        int numberOfWindow = screen[clickSpot.x][clickSpot.y];
        if (numberOfWindow != 0)
        {
            printf("%d\n", numberOfWindow);
            screenFresh(&windows[numberOfWindow - 1]);
        }
        else
        {
            printf("IGNORED\n");
        }
    }
    free(windows);
    return 0;
}
void screenFresh(Area *newWindow)
{
    int number = newWindow->number;
    for (int x = newWindow->leftButton.x; x <= newWindow->rightTop.x; x++)
    {
        for (int y = newWindow->leftButton.y; y <= newWindow->rightTop.y; y++)
        {
            screen[x][y] = number;
        }
    }
}