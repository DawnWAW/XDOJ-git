#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    int count;
    scanf("%c", &ch);
    count = (int)ch - 64;
    for (int i = 1; i <= count; i++)
    {
       for (int j = 1; j <= 2*count-1; j++)
       {
           if (abs(j-count)<i)
           {
               printf("%c", 64+i-abs(j - count));
           }
           else{
            printf(" ");
           }
       }
       printf("\n");
    }
   
    return 0;
}