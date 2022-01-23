#include <stdio.h>

int add(int a1, int a2);
int main()
{
  int a, b ,c;
  printf("enter two numbers:");
  scanf("%d%d",&a,&b);
  int show =add(a,b);
  printf("sum of two numbers is:%d",show);
  return 0;
}
int add (int a1, int a2)
{
  int sum = a1+a2;
  return sum;
}
