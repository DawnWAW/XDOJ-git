#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    char id[20];
    int totalScore;
    int EnglishScore;
} ScoreType;
void swap(ScoreType *score1, ScoreType *score2);
void scoreRanking(ScoreType *Score, int numberOfTotalStudent);
int main()
{
    int numberOfTotalStudent, numberOfStudentPassed;
    scanf("%d %d", &numberOfTotalStudent, &numberOfStudentPassed);
    ScoreType *score = (ScoreType *)calloc(numberOfTotalStudent, sizeof(ScoreType));
    // if (!score)
    // {
    //     printf("error");
    // }
    // else
    //     printf("success");
    // ScoreType score[200];
    for (int i = 0; i < numberOfTotalStudent; i++)
    {

        scanf("%s %d %d", score[i].id, &score[i].totalScore, &score[i].EnglishScore);
    }
    scoreRanking(score, numberOfTotalStudent);

    for (int i = 0; i < numberOfStudentPassed; i++)
    {
        printf("%s %d %d\n", score[i].id, score[i].totalScore, score[i].EnglishScore);
    }
    free(score);
    return 0;
}
void swap(ScoreType *score1, ScoreType *score2)
{
    ScoreType temp = *score1;
    *score1 = *score2;
    *score2 = temp;
}
void scoreRanking(ScoreType *score, int numberOfTotalStudent)
{
    for (int i = 0; i < numberOfTotalStudent - 1; i++)
    {
        for (int j = 0; j < numberOfTotalStudent - 1 - i; j++)
        {
            // 比较总分
            if (score[j].totalScore < score[j + 1].totalScore) // 总分小于
            {

                swap(&score[j], &score[j + 1]);
            }
            else if (score[j].totalScore == score[j + 1].totalScore) // 总分相等
            {

                if (score[j].EnglishScore < score[j + 1].EnglishScore) // 英语分小于
                {
                    swap(&score[j], &score[j + 1]);
                }
                else if (score[j].EnglishScore == score[j + 1].EnglishScore) // 英语分相等
                {

                    if (strcmp(score[j].id, score[j + 1].id) > 0) // 学号较大
                    {
                        swap(&score[j], &score[j + 1]);
                    }
                    else // 学号较小
                        continue;
                }
                else // 英语分大于
                    continue;
            }
            else // 总分大于
                continue;
        }
    }
}