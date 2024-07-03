#include<stdio.h>
int main(){
        float f = 0.,c = 0.;
		scanf("%f", &f);
		c = (f - 32) * 5. / 9.;
		printf("%.2f", c);
        return 0;
}