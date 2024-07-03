#include<stdio.h>
int main(){
    int list4[4],biggest=0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", & list4[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        biggest = (biggest <= list4[i]) ? list4[i] : biggest;
    }
    printf("%d", biggest);

    return 0;
}