// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// typedef struct
// {
//     char output;
//     char motion;
//     char nextOrder[21];
// } ORDER;
// typedef struct
// {
//     char orderName[21];
//     ORDER orderList[3];
// } ORDERTABLE;
// // ORDERTABLE *orderTable = NULL;
// int kindsOfOrder = 0;
// int change = 0;
// int orderTableCheck(char *orderNameInput, ORDERTABLE *orderTable);
// char *pointerInitalize(char *paper);
// void orderExecution(char *order, ORDERTABLE *orderTable, char *p);
// int main()
// {
//     char paper[101] = {'\0'};
//     int countOfOrder;
//     scanf("%d", &countOfOrder);
//     // orderTable = (ORDERTABLE *)malloc(countOfOrder * sizeof(ORDER));
//     ORDERTABLE orderTable[10];
//     for (int i = 0; i < countOfOrder; i++)
//     {
//         char orderName[21], input, output, motion, nextOrder[21];
//         scanf("%s %c %c %c %s", orderName, &input, &output, &motion, nextOrder);
//         int targetOrder = orderTableCheck(orderName, orderTable);
//         input = ((input == '*') ? 2 : input - '0');
//         strcpy(orderTable[targetOrder].orderName, orderName);
//         orderTable[targetOrder].orderList[(int)input].output = output;
//         orderTable[targetOrder].orderList[(int)input].motion = motion;
//         strcpy(orderTable[targetOrder].orderList[(int)input].nextOrder, nextOrder);
//     }
//     scanf("%s", &paper[0]);
//     char *p;
//     p = pointerInitalize(paper);

//     char order[21];
//     strcpy(order, "INIT");
//     while (strcmp("STOP", order) != 0)
//     {
//         orderExecution(order, orderTable, p);
//         p += change;
//     }

//     printf("%s", paper);
//     // free(orderTable);
//     return 0;
// }
// int orderTableCheck(char *orderNameInput, ORDERTABLE *orderTable)
// {
//     for (int i = 0; i < kindsOfOrder; i++)
//     {
//         if (strcmp(orderTable[i].orderName, orderNameInput) == 0)
//         {
//             return i;
//         }
//     }
//     return kindsOfOrder++;
// }
// char *pointerInitalize(char *paper)
// {
//     char *p;
//     p = paper;
//     int time = 2;
//     while (*p != '\0')
//     {
//         if (*p == '*')
//         {
//             time--;
//             if (time == 0)
//             {
//                 break;
//             }
//         }
//         p++;
//     }
//     return p;
// }
// void orderExecution(char *order, ORDERTABLE *orderTable, char *p)
// {
//     char *orderMake = order;
//     char orderCopy[21];
//     int len = 0;
//     while (*orderMake != '\0')
//     {
//         orderCopy[len++] = *orderMake++;
//     }

//     int orderPostion;
//     for (int i = 0; i < 10; i++)
//     {
//         if (strcmp(orderCopy, orderTable[i].orderName) == 0)
//         {
//             orderPostion = i;
//             break;
//         }
//     }
//     int input;
//     switch (*p)
//     {
//     case '0':
//         input = 0;
//         break;
//     case '1':
//         input = 1;
//         break;
//     case '*':
//         input = 2;
//         break;
//     }
//     *p = orderTable[orderPostion].orderList[input].output;
//     switch (orderTable[orderPostion].orderList[input].motion)
//     {
//     case 'L':
//         change = -1;
//         break;
//     case 'R':
//         change = 1;
//         break;
//     case 'N':
//         change = 0;
//         break;
//     }
//     strcpy(order, orderTable[orderPostion].orderList[input].nextOrder);
// }
#include <stdio.h>
typedef struct
{
    char output;
    char motion;
    int nextOrder;
} ORDER;
int kindsOfOrder = 0;
int movement = 0;
char paper[101] = {'\0'};
ORDER hashTable[600][4];
char *pointerInitalize(int);
void orderExecution(int *, char *);
int hashFunction(char *);
int main()
{
    int countOfOrder;
    scanf("%d", &countOfOrder);
    // orderTable = (ORDERTABLE *)malloc(countOfOrder * sizeof(ORDER));
    for (int i = 0; i < countOfOrder; i++)
    {
        char orderName[21], input, output, motion, nextOrder[21];
        scanf("%s %c %c %c %s", orderName, &input, &output, &motion, nextOrder);
        int orderNameInchar = hashFunction(orderName);
        int inputNum;
        switch (input)
        {
        case '0':
            inputNum = 0;
            break;
        case '1':
            inputNum = 1;
            break;
        case '*':
            inputNum = 2;
            break;
        case '#':
            inputNum = 3;
            break;
        }
        hashTable[orderNameInchar][inputNum].output = output;
        hashTable[orderNameInchar][inputNum].motion = motion;
        hashTable[orderNameInchar][inputNum].nextOrder = hashFunction(nextOrder);
    }
    scanf("%s", paper);
    char *p;
    p = pointerInitalize(2);
    int orderNumber = hashFunction("INIT");
    int endingOrderNumber = hashFunction("STOP");
    while (orderNumber != endingOrderNumber)
    {
        orderExecution(&orderNumber, p);
        p += movement;
    }
    p = pointerInitalize(1) + 1;
    while (*p != '*')
    {
        printf("%c", *p++);
    }
    return 0;
}
int hashFunction(char *str)
{
    char *p = str;
    int len = 0;
    int asciiNumebr = 0;
    while (*p != '\0')
    {
        asciiNumebr += *p - 'A';
        p++;
        len++;
    }
    return asciiNumebr + len;
}
void orderExecution(int *orderNumber, char *p)
{
    int inputNumber;
    switch (*p)
    {
    case '0':
        inputNumber = 0;
        break;
    case '1':
        inputNumber = 1;
        break;
    case '*':
        inputNumber = 2;
        break;
    case '#':
        inputNumber = 3;
        break;
    }
    *p = hashTable[*orderNumber][inputNumber].output;
    switch (hashTable[*orderNumber][inputNumber].motion)
    {
    case 'L':
        movement = 1;
        break;
    case 'R':
        movement = -1;
        break;
    case 'N':
        movement = 0;
        break;
    }
    *orderNumber = hashTable[*orderNumber][inputNumber].nextOrder;
}
char *pointerInitalize(int time)
{
    char *p;
    p = paper;
    while (*p != '\0')
    {
        if (*p == '*')
        {
            time--;
            if (time == 0)
            {
                break;
            }
        }
        p++;
    }
    return p;
}
