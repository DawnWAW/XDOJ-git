#include<stdio.h>
int main(){
    int a[2][3], b[3][2],c[2][2]={0};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    for (int m = 0; m < 2; m++)
    {
        for (int  n = 0; n < 2; n++)
        {
            for (int o = 0; o < 3; o++)
            {
                c[m][n] += a[m][o] * b[o][n];
            }
            
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}