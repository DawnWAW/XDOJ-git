#include<stdio.h>
int main(){
  int m,s;
  double minutes,temperature;
  scanf("%d %d",&m,&s);
  minutes=m+(double)s/60.;
  if(minutes<=10){
    temperature=100-5*minutes;
  }
  else if(minutes<=30){
    temperature=60-minutes;
  }
  else if(minutes<=50){
    temperature=30-0.5*(minutes-30);
  }
  else{
    temperature=20;
  }
  printf("%.1lf",temperature);
  return 0;
}