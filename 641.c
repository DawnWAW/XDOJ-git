#include <stdio.h>
#define MAX 100
int row, col;
int x_in, y_in;
int x_out, y_out;
int step = 0;
int maze[MAX][MAX] = {0};
void search(int x_now, int y_now, int step, int mark);
int main()
{
    scanf("%d %d %d %d %d %d", &row, &col, &x_in, &y_in, &x_out, &y_out);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &maze[i][j]);
        }
    }
    search(x_in, y_in, step, -1);
    return 0;
}
void search(int x_now, int y_now, int step, int mark)
{
    if (x_now == x_out && y_now == y_out)
    {
        printf("%d", step);
        return;
    }
    if (x_now - 1 >= 0 && maze[x_now - 1][y_now] != 1 && mark != 2)
    {
        search(x_now - 1, y_now, step + 1, 1);
    }
    if (x_now < col - 1 && maze[x_now + 1][y_now] != 1 && mark != 1)
    {
        search(x_now + 1, y_now, step + 1, 2);
    }
    if (y_now - 1 >= 0 && maze[x_now][y_now - 1] != 1 && mark != 4)
    {
        search(x_now, y_now - 1, step + 1, 3);
    }
    if (y_now < row - 1 && maze[x_now][y_now + 1] != 1 && mark != 3)
    {
        search(x_now, y_now + 1, step + 1, 4);
    }
}