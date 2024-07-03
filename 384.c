#include<stdio.h>
int main(){
    int apple=0,time,applelist[21];
    scanf("%d",&time);
    for (int i = 0; i <= time; i++)
    {
        scanf("%d",&applelist[i]);
        apple += applelist[i];
    }
    printf("%d ", apple);
    for (int i = 1; i <= time; i++)
    {
        applelist[0] = (applelist[0] < applelist[i]) ? applelist[0] : applelist[i];
    }
    for (int i = 1; i <= time; i++)
    {
        if (applelist[0]==applelist[i])
        {
            printf("%d",i);
        }  
    }
    
    
    return 0;
}