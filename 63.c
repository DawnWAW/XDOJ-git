#include <stdio.h>
int main()
{
    int salary, taxPart;
    double tax;
    scanf("%d", &salary);
    if (salary <= 3500)
    {
        printf("%d", salary);
    }
    else
    {
        taxPart = salary - 3500;
        if (taxPart <= 1500)
        {
            tax = 0.03 * taxPart;
        }
        else if (taxPart <= 4500)
        {
            tax = 45 + (taxPart - 1500) * 0.10;
        }
        else if (taxPart <= 9000)
        {
            tax = 345 + (taxPart - 4500) * 0.20;
        }
        else if (taxPart <= 35000)
        {
            tax = 1245 + (taxPart - 9000) * 0.25;
        }
        else
        {
            tax = 7745 + (taxPart - 35000) * 0.30;
        }
        printf("%.0lf", salary - tax);
    }
    
    return 0;
}