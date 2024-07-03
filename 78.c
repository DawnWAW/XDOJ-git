#include <stdio.h>
#define MAX 20
typedef struct
{
    int row, col;
} position;
int main()
{
    char orderMatrix[MAX][MAX];
    // 机器人的未前往位置全部初始化为0
    int row, col, stepInGrid[MAX][MAX] = {0};
    // 初始化机器人的位置
    position positionOfRobot = {1, 1};
    scanf("%d %d %d", &row, &col, &positionOfRobot.col);
    getchar();
    // 接受指令网格
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%c", &orderMatrix[i][j]);
        }
        getchar();
    }
    int numOfStep = 0;
    while (1)
    {
        // 判断是否去到之前去过的位置而进入循环
        if (stepInGrid[positionOfRobot.row - 1][positionOfRobot.col - 1] == 1)
        {
            printf("loop %d", numOfStep);
            break;
        }
        // 留下足迹
        stepInGrid[positionOfRobot.row - 1][positionOfRobot.col - 1] = 1;
        // 接受命令
        switch (orderMatrix[positionOfRobot.row - 1][positionOfRobot.col - 1])
        {
        case 'N':
            positionOfRobot.row -= 1;
            break;
        case 'S':
            positionOfRobot.row += 1;
            break;
        case 'E':
            positionOfRobot.col += 1;
            break;
        case 'W':
            positionOfRobot.col -= 1;
            break;
        }
        numOfStep++;
        // 判断是否走出网格
        if ((positionOfRobot.row <= 0 || positionOfRobot.row > row) || (positionOfRobot.col <= 0 || positionOfRobot.col > col))
        {
            printf("out %d", numOfStep);
            break;
        }
    }

    return 0;
}