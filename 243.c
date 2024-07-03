#include <stdio.h>
#define max 100
typedef struct
{
    char name[20];
    int total, addtion;
} student;
void bubble(student *stc, int len)
{
    int i, j;
    student temp;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (stc[j].total < stc[j + 1].total || (stc[j].addtion < stc[j + 1].addtion && stc[j].total == stc[j + 1].total))
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
    student stu[max];
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%s", stu[i].name);
        int t1, t2, t3, t4, t5;
        scanf("%d %d %d %d %d %d", &t1, &t2, &t3, &t4, &t5, &stu[i].addtion);
        stu[i].total = t1 + t2 + t3 + t4 + t5 + stu[i].addtion;
    }
    bubble(stu, num);
    for (int i = 0; i < num; i++)
    {
        printf("%s %d %d\n", stu[i].name, stu[i].total, stu[i].addtion);
    }
    return 0;
}