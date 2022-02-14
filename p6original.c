#include<stdio.h>
int input_n()
{
  int a;
  printf("Enter the numbers");
  scanf("%d",&a);
  return a;
}
int sum_n(int n)
{
  int sum=0;
  for (int i=1; i<=n; i++)
  {
    sum=sum+i;
  }
  return sum;
}
void out_put(int n,int sum0)
{
  int i;
  for(i=1; i<=n; i++)
  {
    printf("%d + ",i);
  }
  printf("%d = %d", n, sum0);
}
int main()
{
  int x =input_n();
  int sum0 = sum_n(x);
  out_put(x, sum0);
  return 0;
}