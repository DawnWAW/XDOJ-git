#include<stdio.h>
int main(){
    int a = 0, 
		b = 0, 
		a_plus_b = 0,
		a_subtract_b = 0,
		a_mult_b = 0,
		a_devide_b = 0; 
		scanf("%d %d", &a, &b);
		a_plus_b = a + b;
		a_subtract_b = a - b;
		a_mult_b = a * b;
		a_devide_b = a / b;
		printf("%d\n",a_plus_b);
		printf("%d\n", a_subtract_b);
		printf("%d\n", a_mult_b);
		printf("%d\n", a_devide_b);
    return 0;
}