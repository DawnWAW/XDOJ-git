#include <stdio.h>
#include <stdlib.h>
int seat[20] = {0};
int searchVacantSeat(int countOfTicket);
void ticketDown(int countOfTicket, int rowPosition);
int main()
{
    // initialization
    for (int i = 0; i < 20; i++)
    {
        seat[i] = 5;
    }
    int countOfBooking;
    scanf("%d", &countOfBooking);
    int *bookingOrder = (int *)calloc(countOfBooking, sizeof(int));
    for (int i = 0; i < countOfBooking; i++)
    {
        scanf("%d", &bookingOrder[i]);
    }
    for (int i = 0; i < countOfBooking; i++)
    {
        ticketDown(bookingOrder[i], searchVacantSeat(bookingOrder[i]));
        printf("\n");
    }
    free(bookingOrder);
    return 0;
}
int searchVacantSeat(int countOfTicket)
{
    int *p = seat;
    int rowPositon = 0;
    while (rowPositon < 20)
    {
        if (*p >= countOfTicket)
        {
            return rowPositon;
        }
        else
        {
            rowPositon++;
            p++;
        }
    }
    return -1;
}
void ticketDown(int countOfTicket, int rowPosition)
{
    if (rowPosition != -1)
    {
        int seatMark = 5 - seat[rowPosition];
        for (int i = 0; i < countOfTicket; i++)
        {
            printf("%d ", 5 * rowPosition + 1 + seatMark++);
        }
        seat[rowPosition] -= countOfTicket;
    }
    else
    {
        for (int i = 0; i < countOfTicket; i++)
        {
            ticketDown(1, searchVacantSeat(1));
        }
    }
}