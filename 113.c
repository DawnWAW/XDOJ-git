#include <stdio.h>
#include<math.h>
int main()
{
  double mileage = 0., fare = 0.;
  int time = 0;
  scanf("%lf %d", &mileage, &time);
  mileage = (round(mileage * 10)) / 10.;

  if (mileage <= 3)
  {
    fare = 10 + 2 * (time / 5);
  }
  else if (mileage <= 10)
  {
    fare = 10 + 2 * (mileage - 3) + 2 * (time / 5);
  }
  else
  {
    fare = 24 + 3 * (mileage - 10) + 2 * (time / 5);
  }
  printf("%.0lf", round(fare));
  return 0;
}