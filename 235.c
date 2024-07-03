#include<stdio.h>
typedef struct
{
    int number;
    char name[10];
} calender;

int main(){
    calender month[12] = {{1, "January"}, {2, "Februry"}, {3, "March"}, {4, "April"}, {5, "May"}, {6, "June"}, {7, "July"}, {8, "August"}, {9, "September"}, {10, "October"}, {11, "November"}, {12, "December"}};
    int num;
    scanf("%d",&num);
    if (num>12)
    {
        printf("wrong");
        return 0;   
    }
    calender *p = &month[num-1];
    printf("%s",p->name);
    return 0;
}