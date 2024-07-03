#include<stdio.h>
int main(){
    int a=1,b=1;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    //printf("%d,%c,%d",a,c,b);
    if(c=='+'){
        printf("%d+%d=%d\n",a,b,a+b);
    }
    else if(c=='-'){
        printf("%d-%d=%d",a,b,a-b);
    }
    else if(c=='*'){
        printf("%d*%d=%d",a,b,a*b);
    }
    else if(c=='/'){
        printf("%d/%d=%d",a,b,a/b);
    }
    else if(c=='%'){
        printf("%d%c%d=%d",a,c,b,a%b);
    }
    return 0;
}
