//multiplication table
#include<stdio.h>
void main()
{
  int a,b;
    a=1;
    do
    {
    b=1;
    do
    {
      printf("%d*%d=%d",a,b,a*b);
      printf("\n");
      b++;
    }
    while(b<=10);
    a++;
    }
    while(a<=10);
}
