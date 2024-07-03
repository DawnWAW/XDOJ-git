#include<stdio.h>
int main(){
    char a;
    scanf("%c", &a);
    if (a>='A'&&a<='Z')
    {
        printf("%c", a + 32);
    }
    else if(a<='z'&&a>='a'){
        printf("%c", a - 32);
    }
    else{
        printf("%c", a);
    }
    
    return 0;
}