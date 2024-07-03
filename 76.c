#include<stdio.h>
int main(){
    int n, list[30], count[100000] = {0};
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&list[i]);
        count[list[i]]++;
    }
    for (int i = 0; i < 100000; i++)
    {
        if (count[i]!=0)
        {
            printf("%d:%d\n",i,count[i]);
        }
        
    }
    
    return 0;
}