#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int countOfNumber;
    int array[100];
    int smallestNum = 100;
    int smallestPosition;
    int biggestNum = -100;
    int biggestPosition;
    scanf("%d", &countOfNumber);
    for (int i = 0; i < countOfNumber; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < countOfNumber; i++)
    {
        if (array[i] > biggestNum)
        {
            biggestNum = array[i];
            biggestPosition = i;
        }
    }
    swap(&array[0], &array[biggestPosition]);
    for (int i = 0; i < countOfNumber; i++)
    {
        if (array[i] < smallestNum)
        {
            smallestNum = array[i];
            smallestPosition = i;
        }
    }
    swap(&array[countOfNumber - 1], &array[smallestPosition]);
    for (int i = 0; i < countOfNumber; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}