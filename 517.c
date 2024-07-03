#include <stdio.h>
#include <stdbool.h>
void bubbleSort(int array[], int arrarLength, bool turn)
{
    for (int i = 0; i < arrarLength - 1; i++)
    {
        for (int j = 0; j < arrarLength - 1 - i; j++)
        {
            if (((array[j] > array[j + 1]) && turn) || ((array[j] < array[j + 1]) && (!turn)))
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
bool search(int *array, int length, int target)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] == target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int countOfNumber;
    int array[1000];
    int newarray[1000];
    int lengthOfnewarray = 0;
    scanf("%d", &countOfNumber);
    for (int i = 0; i < countOfNumber; i++)
    {
        scanf("%d", &array[i]);
    }
    int *p_array = array;
    bubbleSort(array, countOfNumber, true);
    for (int i = 0; i < countOfNumber; i++)
    {
        if (search(newarray, lengthOfnewarray, array[i]) == false)
        {
            newarray[lengthOfnewarray++] = array[i];
            while (*p_array == *(p_array + 1))
            {
                p_array++;
            }
        }
        p_array++;
    }
    for (int i = 0; i < lengthOfnewarray; i++)
    {
        printf("%d ", newarray[i]);
    }

    return 0;
}