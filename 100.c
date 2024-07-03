#include<stdio.h>
void isTriangle(double a, double b, double c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("%.0lf",a+b+c);
    }
    else
    {
        printf("No");
    }
}
int main(){
    double a, b, c;
    scanf("%lf %lf %lf",&a,&b,&c);
    isTriangle(a, b, c);
    return 0;
}