#include <stdio.h>
int main()
{
    // 猜数字游戏
    int ans = 0, guess_num = 0, time = 0, N = 0;

    // 设置答案和猜测次数
    scanf("%d %d", &ans, &N);

    while (1)
    {
        time++;
        if (time > N)
        {
            printf("Game Over\n");
            break;
        }
        scanf("%d", &guess_num);
        if (guess_num < 0)
        {
            printf("Game Over\n");
            break;
        }
        else if (guess_num == ans)
        {
            if (time == 1)
            {
                printf("Bingo!\n");
                break;
            }
            else if (time <= 3)
            {
                printf("Lucky You!\n");
                break;
            }
            else
            {
                printf("Good Guess!\n");
                break;
            }
        }
        else if (guess_num < ans)
        {
            printf("Too small\n");
        }
        else
        {
            printf("Too big\n");
        }
    }
    return 0;
}