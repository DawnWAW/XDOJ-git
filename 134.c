#include <stdio.h>
#define MaxNumberDigit 9
int digitOfNumber(int number)
{
    int count = 0;
    while (number != 0)
    {
        number /= 10;
        count++;
    }
    return count;
}
void bubble(int arr[], int len)
{
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    int digit = digitOfNumber(num);
    int listOfEachDigit[MaxNumberDigit] = {0};
    for (int i = 0; i < digit; i++)
    {
        listOfEachDigit[i] = num % 10;
        num /= 10;
    }
    bubble(listOfEachDigit, digit);
    for (int i = 0; i < digit; i++)
    {
        printf("%d ", listOfEachDigit[i]);
    }

    return 0;
}