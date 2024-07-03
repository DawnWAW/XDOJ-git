// #include<stdio.h>
// int main(){
//     int num[100], n, target;
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&num[i]);
//     }
//     scanf("%d",&target);
//     for (int i = 0; i < n-1; i++)
//     {
//        for (int j = i+1; j < n; j++)
//        {
//         if (num[i]+num[j]==target)
//         {
//             printf("%d %d",i,j);
//         }

//        }

//     }

//     return 0;
// }
#include <stdio.h>
int main()
{
    int num[100], n, target, hash[101] ;
    for (int i = 0; i < 101; i++)
    {
        hash[i] = -1;
    }
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {
        if (target - num[i] >= 0 && hash[target - num[i]] != -1)
        {
            printf("%d %d", hash[target - num[i]], i);
        }
        else
            hash[num[i]] = i;
    }

    return 0;
}