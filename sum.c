#include<stdio.h>
int sum_of_digits(int n)
{
  if(n==0)
  {
    return 0;
  }
  else
  {
    return n%10+sum_of_digits(n/10);
  }
}
int main()
{
  int x,output;
  printf("enter a number:");
  scanf("%d",&x);
  output=sum_of_digits(x);
  printf("sum of the digits of x is %d",output);
}
