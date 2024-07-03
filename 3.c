#include<stdio.h>
#include<math.h>
int main(){
    int list[1000],n,i,j,margin,op=10000;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      scanf("%d",&list[i]);
    }
    for(i=1;i<n;i++){
      for (j = i + 1; j <= n; j++)
      {
        margin = abs(list[i] - list[j]);
        op = (margin < op) ? margin : op;
      }
    }
    printf("%d",op);
  return 0;
}