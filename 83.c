#include<stdio.h>
int main(){
    int matrix[100][100];
    int row, col;
    scanf("%d %d",&row,&col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&matrix[j][row-i-1]);
        }
    }
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}