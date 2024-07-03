#include <stdio.h>
#include <stdlib.h>
// #define max_num_list 1000
#define max_num 100
int* address_search(int num,int *list,int len){
    int *address;
    for (int i = 0; i < len; i++)
    {
        if (num==list[i])
        {
            address = &list[i];
            break;
        }
        
    }
    return address;
}
int main()
{
    int n, count[max_num + 1] = {0}, output[max_num + 1], cnt = 0, flag = 1;
    // 数组输入
    scanf("%d", &n);
    int *list = (int *)malloc(n * sizeof(int));
    int *p = list;
    for (int i = 0; i++ < n; p++)
    {
        scanf("%d", p);
    }
    // 回指
    p = list;
    // 遍历数组并计数
    for (int i = 0; i++ < n; p++)
    {
        // 在计数的数组中对应下标的次数+1
        count[*p]++;
        // 存储有效数字
        if (count[*p] == 3)
        {
            output[cnt++] = *p;
            if (flag == 1)
                flag = 0;
        }
    }
    int *p1=NULL, *p2=NULL;
    for (int i = 0; i < cnt - 1; i++)
    {
        for (int j = 0; j < cnt - 1 - i; j++)
        {
            p1 = &output[j];
            p2 = &output[j + 1];
            if (address_search(*p1, list, n)>address_search(*p2, list, n))
            {
                int temp = output[j];
                output[j] = output[j + 1];
                output[j + 1] = temp;
            }
        }
    }
for (int i = 0; i < cnt; i++)
{
    printf("%d ",output[i]);
}

    if (flag)
    {
        printf("No");
    }
    free(list);
    return 0;
}
