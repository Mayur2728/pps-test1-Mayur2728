#include<stdio.h>
int input()
{
  int a;
  printf("enter two numbers you wish to add\n");
  scanf("%d",&a);
  return a;
}
int add(int a, int b,int *sum)
{
  *sum=a+b;
  return *sum;
}
void output(int a, int b , int sum)
{
  printf("Sum of two numbers is %d",add);
}
int main()
{
  int x,y;
  x=input();
  y=input();
  result=add(a,b);
  output(a,b,&result);
  return 0;
}
