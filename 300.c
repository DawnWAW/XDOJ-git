#include<stdio.h>
int inter(int a){
    int d = 0;
    while (a/10!=0)
    {
        a /= 10;
        d++;
    }
    return d+1;
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",inter(a));
    return 0;
}