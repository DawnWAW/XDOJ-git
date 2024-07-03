#include <stdio.h>
int main()
{
    int time,pic[100][100]={0};
    scanf("%d", &time);
    for (int  i = 0; i < time; i++)
    {
        int x_from, x_to, y_from, y_to;
        scanf("%d %d %d %d",&x_from,&y_from,&x_to,&y_to);
        for (int i = x_from; i < x_to; i++)
        {
            for (int j = y_from; j < y_to; j++)
            {
                pic[i][j] = 1;
            }
            
        }
        
        
    }
    int cnt=0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (pic[i][j]==1)
            {
                cnt++;
            }
            
        }
        
    }
    printf("%d",cnt);

    return 0;
}