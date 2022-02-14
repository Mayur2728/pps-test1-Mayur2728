#include <stdio.h>
void input(int *a,int *b,int *c)
{
  printf("Enter the value\n");
  scanf("%d%d%d", a , b , c);
  

}
void compare(int a, int b, int c, int *large)
{
if(a>=b && a>=c)
  *large=a;
  else if(b>=c)
  *large=b;
  else
  *large=c;
  }
void output(int large)

{
  printf("the greatest number is %d",large);
}
int main()
{
  int x,y,z,large;
  input(&x,&y,&z);
  compare(x,y,z,&large);
  output(large);
  return 0;

}