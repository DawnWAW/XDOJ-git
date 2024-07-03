#include<stdio.h>
int digitSum(int num){
    int sum = 0;
    while (num!=0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum; 
}
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d",&num);
        sum += digitSum(num);
    }
    printf("%d",sum%10);
    return 0;
}