#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef struct
{
    int id;
    int timeRecordInMinute;
} timeRecoderType;
typedef struct
{
    int hour;
    int minute;
} timeFormIn24;
int minuteTranslator(timeFormIn24 time1, timeFormIn24 time2);
int timeRanking(timeRecoderType *timeRecodes);
int main()
{
    int numberOfRecords;
    scanf("%d", &numberOfRecords);
    // 初始化
    timeRecoderType timeRecords[MAX + 1];
    for (int i = 0; i < MAX + 1; i++)
    {
        timeRecords[i].id = i;
        timeRecords[i].timeRecordInMinute = 0;
    }
    // 输入
    for (int i = 0; i < numberOfRecords; i++)
    {
        int id_temp;
        timeFormIn24 time1, time2;
        scanf("%d %d:%d %d:%d", &id_temp, &time1.hour, &time1.minute, &time2.hour, &time2.minute);
        int timeAddedInMinute = minuteTranslator(time1, time2);
        timeRecords[id_temp].timeRecordInMinute += timeAddedInMinute;
    }
    // 排序并返回有效数字个数
    int numberOfValidRecords = timeRanking(timeRecords);
    // 输出
    for (int i = 0; i < numberOfValidRecords; i++)
    {
        printf("%d %d\n", timeRecords[i].id, timeRecords[i].timeRecordInMinute);
    }

    return 0;
}
int minuteTranslator(timeFormIn24 time1, timeFormIn24 time2)
{
    return (time2.hour * 60 + time2.minute) - (time1.hour * 60 + time1.minute);
}
int timeRanking(timeRecoderType *timeRecodes)
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX - i; j++)
        {
            if (timeRecodes[j].timeRecordInMinute <= timeRecodes[j + 1].timeRecordInMinute)
            {
                if (timeRecodes[j].timeRecordInMinute == timeRecodes[j + 1].timeRecordInMinute && timeRecodes[j].id < timeRecodes[j + 1].id)
                {
                    continue;
                }
                else
                {
                    timeRecoderType temp = timeRecodes[j];
                    timeRecodes[j] = timeRecodes[j + 1];
                    timeRecodes[j + 1] = temp;
                }
            }
        }
    }
    int validNumber = 0;
    timeRecoderType *p = timeRecodes;
    while (p->timeRecordInMinute!=0)
    {
        validNumber++;
        p++;
    }
    return validNumber;
}