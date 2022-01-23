#include<stdio.h>
int biggestnumber(int a, int b, int c)
{
  int biggest;
  if( a>b && a>c)
  biggest=a;
  else if(b>a && b>c)
  biggest=b;
  else
  biggest=c;
  return biggest;
}
int main()
{
  int a,b,c;
  printf("enter the three numbers:\n");
  scanf("%d%d%d",&a,&b,&c);
  int cmp=biggestnumber(a,b,c);
  printf("biggest number is: %d",cmp);
  return 0;
}