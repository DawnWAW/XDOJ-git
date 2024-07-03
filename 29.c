#include <stdio.h>
int d1(int d);
int d2(int d);
int d3(int d);
int d4(int d);
int d5(int d);
int d6(int d);
int d7(int d);
int d8(int d);
int d9(int d);
int main()
{
  int d;
  scanf("%d", &d);
  printf("%d", d1(d) + d2(d) + d3(d) + d4(d) + d5(d) + d6(d) + d7(d) + d8(d) + d9(d));
  return 0;
}
int d1(int num)
{
  int d1 = num % 10;
  return d1;
}
int d2(int num)
{
  int d2 = num % 100 / 10;
  return d2;
}
int d3(int num)
{
  int d3 = num % 1000 / 100;
  return d3;
}
int d4(int num)
{
  int d4 = num % 10000 / 1000;
  return d4;
}
int d5(int num)
{
  int d5 = num % 100000 / 10000;
  return d5;
}
int d6(int num)
{
  int d6 = num % 1000000 / 100000;
  return d6;
}
int d7(int num)
{
  int d7 = num % 10000000 / 1000000;
  return d7;
}
int d8(int num)
{
  int d8 = num % 100000000 / 10000000;
  return d8;
}
int d9(int num)
{
  int d9 = num / 100000000;
  return d9;
}