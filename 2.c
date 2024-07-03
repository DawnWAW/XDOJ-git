// #include <stdio.h>
// int main()
// {
//     int N, i = 0, d = 0;
//     scanf("%d", &N);
//     int list[1000];

//     for (i = 0; i < N; i++)
//     {
//         scanf("%d", &list[i + 1]);
//         if (list[i] != list[i + 1])
//         {
//             d++;
//         }
//     }
//     printf("%d", d);
//     return 0;
// }
#include <stdio.h>
#define max 1000
int main()
{
    int num, list[max] = {0}, numberOfArror = 1;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &list[i]);
        if (i != 0 && list[i - 1] != list[i])
        {
            numberOfArror++;
        }
    }
    printf("%d", numberOfArror);
    return 0;
}