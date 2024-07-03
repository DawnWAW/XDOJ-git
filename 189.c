#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double s, h;
    scanf("%d",&n);
    s = 400 * (1 - pow(0.5, n)) - 100;
    h = 100 * pow(0.5, n);
    printf("S=%.3lf h=%.3lf",s,h);
    return 0;
}