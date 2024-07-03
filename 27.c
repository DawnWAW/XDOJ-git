#include<stdio.h>
int main(){
    double degree,pay;
    scanf("%lf", &degree);
    if(degree<=110){
        pay = 0.5 * degree;
    }
    else if(degree<=210){
        pay = 55 + 0.55 * (degree - 110);
    }
    else{
        pay = 110 + 0.7 * (degree - 210);
    }
    printf("%.2lf", pay);
    return 0;
}