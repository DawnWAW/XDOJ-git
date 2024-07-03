#include <stdio.h>
#include <string.h>
#define max 10
typedef struct
{
    int id;
    char name[20];
    int lesson1, lesson2, lesson3, total;
} student;
void bubble(student *stc, int len)
{
    int i, j;
    student temp;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (stc[j].total < stc[j + 1].total)
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
        score[i].total = (score[i].lesson1 + score[i].lesson2 + score[i].lesson3);
    }
    bubble(score, num);
    printf("%s %d %d\n",score[0].name, score[0].id, score[0].total);

    return 0;
}