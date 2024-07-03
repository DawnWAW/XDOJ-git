#include<stdio.h>
int main(){
    int h = 0, m = 0;
    double t = 0., T = 0.;
    scanf("%d %d", &h, &m);
    t = h + m / 60.;
    T = 4 * t * t / (t + 2) - 20;
    printf("%.2lf", T);
    return 0;
}