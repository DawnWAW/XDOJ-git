#include <stdio.h>
#include <string.h>
#define max 100
typedef struct
{
    int id;
    char name[20];
    int lesson1, lesson2, lesson3;
    float average;
} student;
void bubble(student *stc, int len)
{
    int i, j;
    student temp;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (stc[j].average < stc[j + 1].average)
            {
                temp = stc[j];
                stc[j] = stc[j + 1];
                stc[j + 1] = temp;
            }
        }
    }
}
int main()
{

    int num;
    scanf("%d", &num);
    student score[max];
    for (int i = 0; i < num; i++)
    {
        scanf("%d %s %d %d %d", &score[i].id, score[i].name, &score[i].lesson1, &score[i].lesson2, &score[i].lesson3);
        score[i].average = (score[i].lesson1 + score[i].lesson2 + score[i].lesson3) / 3.0;
    }
    bubble(score, num);
    for (int i = 0; i < num; i++)
    {
        printf("%d %s %.1f\n", score[i].id, score[i].name, score[i].average);
    }

    return 0;
}