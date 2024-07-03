// #include <stdio.h>
// #define MAX_SIZE 10
// int main() {
//     int T, n, i, j, row, col;
//     int matrix[MAX_SIZE][MAX_SIZE];
//     // 读取矩阵数量
//     scanf("%d", &T);
//     // 逐个读取矩阵并判断
//     for (row = 0; row < T; row++) {
//         // 读取矩阵大小和元素
//         scanf("%d", &n);
//         for (col = 0; col < n; col++) {
//             for (i = 0; i < n; i++) {
//                 scanf("%d", &matrix[i][col]);
//             }
//         }
//         // 检查是否为上三角矩阵
//         for (i = 0; i < n; i++) {
//             for (j = i + 1; j < n; j++) {
//                 if (matrix[i][j] != 0) {
//                     printf("NO\n");

//                 }
//                 else{
//                     printf("YES\n");

//                 }
//             }
//         }

//     }
//     return 0;
// }

// #include <stdio.h>
// #define MAX_SIZE 10
// int main()
// {
//     int T, n, i, j, row, col;
//     int matrix[MAX_SIZE][MAX_SIZE];
//     // 读取矩阵数量
//     scanf("%d", &T);
//     // 逐个读取矩阵并判断
//     for (row = 0; row < T; row++)
//     {
//         // 读取矩阵大小和元素
//         scanf("%d", &n);
//         for (col = 0; col < n; col++)
//         {
//             for (i = 0; i < n; i++)
//             {
//                 scanf("%d", &matrix[i][col]);
//             }
//         }
//         // 检查是否为上三角矩阵
//         for (i = 0; i < n; i++)
//         {
//             for (j = i + 1; j < n; j++)
//             {
//                 if (matrix[i][j] != 0)
//                 {
//                     printf("NO\n");
//                     // 如果不是上三角矩阵，继续检查下一个矩阵
//                 }
//                 else
//                 {
//                     printf("YES\n");
//                 }
//             }
//         }
//     }
//     return 0;
// }

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX_SIZE 10
int main()
{
    int T, n, i, j, row, col, siwtch;
    int matrix[MAX_SIZE][MAX_SIZE];
    // 读取矩阵数量
    scanf("%d", &T);
    // 逐个读取矩阵并判断
    for (row = 0; row < T; row++)
    {
        // 读取矩阵大小和元素
        siwtch = 0;
        scanf("%d", &n);
        for (col = 0; col < n; col++)
        {
            for (i = 0; i < n; i++)
            {
                scanf("%d", &matrix[i][col]);
            }
        }
        // 检查是否为上三角矩阵
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (matrix[i][j] != 0 && siwtch == 0)
                {
                    printf("NO\n");
                    siwtch = 1;
                }
            }
        }
        if (siwtch == 0)
        {
            printf("YES\n");
        }
    }
    return 0;
}