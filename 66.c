#include<stdio.h>
int main(){
    int n, list[100];
    scanf("%d", &n);
    double sum = 0.0;
    double average;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
        sum += list[i];
    }
    printf("%.2lf", sum / n);

    return 0;
}