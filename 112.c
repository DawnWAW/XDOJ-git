#include<stdio.h>
#include<math.h>
int main(){
    double x;
    scanf("%lf", &x);
    if (x>=0)
    {
        printf("%.2lf", sqrt(x));
    }
    else{
        printf("%.2lf",pow(x,2)+4*x+1+1/x);
    }
    
    return 0;
}