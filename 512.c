#include <stdio.h>
typedef struct
{
    char bookName[31];
    float price;
} BOOK;

int main()
{
    int countOfBooks;
    BOOK books[10];
    scanf("%d", &countOfBooks);

    for (int i = 0; i < countOfBooks; i++)
    {
        //getchar();
        gets(books[i].bookName);
        scanf("%f", &books[i].price);
    }
    // 排序
    for (int i = 0; i < countOfBooks - 1; i++)
    {
        for (int j = 0; j < countOfBooks - 1 - i; j++)
        {
            if (books[j].price > books[j + 1].price)
            {
                BOOK temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
    // 输出价格最低和最高的书
    printf("%.2f, %s\n%.2f, %s", books[countOfBooks - 1].price, books[countOfBooks - 1].bookName, books[0].price, books[0].bookName);
    return 0;
}