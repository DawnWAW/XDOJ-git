#include<stdio.h>
int main(){
    double apay, bpay,time;
    scanf("%lf", &time);
    apay = 0.6 * time;
    bpay = 50 + 0.4 * time;
    printf("%.2lf\n%.2lf\n%c", apay, bpay, (apay >= bpay) ? 'B' : 'A');
    return 0;
}