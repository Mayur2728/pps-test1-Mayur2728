#include<stdio.h>
float addition(float number1,float number2)
{
  float sum=0;
  sum= number1 + number2;
  return sum;
}
int main()
{
  float number1,number2,result;
  printf("Enter two numbers\n");
  scanf("%f %f",&number1 , &number2);
  result=addition(number1,number2);
  printf("%f + %f is %f",number1,number2,result);
  return 0;
  }