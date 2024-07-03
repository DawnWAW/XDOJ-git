#include <stdio.h>
#include <string.h>
char matrix[3][50];
char key[4], target[51];
int length_key;
int length_target;
int time = 0;
void getValue(int i, int j);
int main()
{
    scanf("%s %s", key, target);
    length_key = strlen(key);
    length_target = strlen(target);
    for (int i = 0; i < length_key; i++)
    {
        for (int j = 0; j < length_target; j++)
        {
            getValue(i, j);
        }
    }
    printf("%d", time);
    return 0;
}
void getValue(int i, int j)
{
    if (key[i] == target[j])
    {
        if (i == 0 || j == 0)
        {
            matrix[i][j] = 1;
        }
        else
        {
            matrix[i][j] = matrix[i - 1][j - 1] + 1;
        }
    }
    else
    {
        matrix[i][j] = 0;
    }
    if (matrix[i][j] == length_key)
    {
        time++;
    }
}
