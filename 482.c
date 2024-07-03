#include<stdio.h>
int d1(int num)
{
    int d1 = num % 10;
    return d1;
}
int d2(int num)
{
    int d2 = num % 100 / 10;
    return d2;
}
int d3(int num)
{
    int d3 = num % 1000 / 100;
    return d3;
}
int d4(int num)
{
    int d4 = num % 10000 / 1000;
    return d4;
}
int d5(int num)
{
    int d5 = num % 100000 / 10000;
    return d5;
}
int d6(int num)
{
    int d6 = num / 100000;
    return d6;
}
int rootSearch(int n){
    int root;
    root = d1(n) + d2(n) + d3(n) + d4(n)+ d5(n) + d6(n) ;
    if(root<=9)
        return root;
    else 
        return rootSearch(root);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",rootSearch(n));
    return 0;
}