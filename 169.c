#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int year;
    int month;
    int day;
} date;
typedef struct
{
    date dateOfWrite;
    int memorySize;
} fileInformation;

void fileSorting(fileInformation *files, int numberOfFiles);
int dateComparation(date date1, date date2);
int main()
{
    int numberOfFlies;
    scanf("%d", &numberOfFlies);
    fileInformation *files = (fileInformation *)malloc(numberOfFlies * sizeof(fileInformation));
    for (int i = 0; i < numberOfFlies; i++)
    {
        scanf("%d/%d/%d %d", &files[i].dateOfWrite.year, &files[i].dateOfWrite.month, &files[i].dateOfWrite.day, &files[i].memorySize);
    }
    fileSorting(files, numberOfFlies);
    for (int i = 0; i < numberOfFlies; i++)
    {
        printf("%d/%d/%d %d\n", files[i].dateOfWrite.year, files[i].dateOfWrite.month, files[i].dateOfWrite.day, files[i].memorySize);
    }
    free(files);
    return 0;
}
int dateComparation(date date1, date date2)
{
    // date1晚于date2返回1，等于返回0，早于返回-1

    if (date1.year > date2.year)
    {
        return 1;
    }
    else if (date1.year == date2.year)
    {
        if (date1.month > date2.month)
        {
            return 1;
        }
        else if (date1.month == date2.month)
        {
            if (date1.day > date2.day)
            {
                return 1;
            }
            else if (date1.day == date2.day)
            {
                return 0;
            }
            else
                goto earilier;
        }
        else
            goto earilier;
    }
    else
        goto earilier;
earilier:
    return -1;
}
void fileSorting(fileInformation *files, int numberOfFiles)
{
    for (int i = 0; i < numberOfFiles - 1; i++)
    {
        for (int j = 0; j < numberOfFiles - 1 - i; j++)
        {
            int resultOfComparation = dateComparation(files[j].dateOfWrite, files[j + 1].dateOfWrite);
            if (resultOfComparation <= 0)
            {

                if (resultOfComparation == 0 && files[j].memorySize > files[j + 1].memorySize)
                {
                    continue;
                }
                fileInformation temp = files[j];
                files[j] = files[j + 1];
                files[j + 1] = temp;
            }
        }
    }
}