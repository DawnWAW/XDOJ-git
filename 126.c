#include<stdio.h>
#include<math.h>
int main(){
  float debt,pay,r,month;
  scanf("%f %f %f",&debt,&pay,&r);
  month=( log(pay)  - log(pay-debt*r)  )/    log(1+r);
  printf("%.2f",month);
  
  return 0;
}