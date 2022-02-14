#include <stdio.h>
int input()
{
  int a;  
  printf("Enter the value\n");
  scanf("%d",&a);
  return a;
  
}
void cmp(int a, int b, int c, int *large)
{
if(a>=b && a>=c)
  *large=a;
  else if(b>=c)
  *large=b;
  else
  *large=c;
  }
void output(int a,int b,int c,int large)

{
  printf("the greatest number is %d",large);
}
int main()
{
  int x,y,z,large,result;
  x=input();
  y=input();
  z=input();
  cmp(x,y,z,&large);
  output(x,y,z,large);
  return 0;

}