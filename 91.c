#include<stdio.h>
#include<math.h>
int main(){
     float l1,l2,l3;
     float l,s;
     scanf("%f %f %f",&l1,&l2,&l3);  
    l=0.5*(l1+l2+l3);

    s=sqrt(l*(float)(l-l1)*(float)(l-l2)*(float)(l-l3));

    printf("%.2f",s);
    return 0;
}