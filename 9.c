#include<stdio.h>
int main(){
    int r_goldenBall=1,r_ferricBall=1;
    double m_goldenBall=1,m_ferricBall=1;
    const double Pi= 3.1415926;
    scanf("%d %d",&r_ferricBall,&r_goldenBall);
    m_ferricBall= 7.86*4.0/3.0*Pi*r_ferricBall*r_ferricBall*r_ferricBall*1.25e-4;
    m_goldenBall= 19.3*4.0/3.0*Pi*r_goldenBall*r_goldenBall*r_goldenBall*1.25e-4;
    printf("%.3lf %.3lf", m_ferricBall, m_goldenBall);
    return 0;
}