#include <stdio.h>
typedef struct
{
    long id;
    float score;
} STUDENT;
void quickRanking(STUDENT *student, int left, int right)
{
    if (left >= right)
        return;
    else
    {
        STUDENT pivot = student[left];
        int i = left;
        int j = right;
        while (i < j)
        {
            while (i<j&&student[j].score <= pivot.score)
            {
                j--;
            }
            student[i] = student[j];
            while (i<j&&student[i].score >= pivot.score)
            {
                i++;
            }
            student[j] = student[i];
        }
        student[i] = pivot;
        quickRanking(student, left, i - 1);
        quickRanking(student, i + 1, right);
    }
}
int main()
{
    STUDENT student[10];
    int countOfStudents;
    float totalScore = 0., averageScore;
    scanf("%d", &countOfStudents);
    for (int i = 0; i < countOfStudents; i++)
    {
        scanf("%ld %f", &student[i].id, &student[i].score);
        totalScore += student[i].score;
    }
    averageScore = totalScore / countOfStudents;
    quickRanking(student, 0, countOfStudents - 1);
    printf("%.2f %ld\n%.2f %ld\n%.2f %.2f", student[0].score, student[0].id, student[countOfStudents - 1].score, student[countOfStudents - 1].id, totalScore, averageScore);
    return 0;
}