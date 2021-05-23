//sum the 5 digit of a number
#include<stdio.h>
void main()
{
  int n,s=0,a;
  printf("enter the number");
  scanf("%d",&a );

  while(a>0)
  {
    n=a%10;
    a=a/10;
    s=s+n;
  }
  printf("sum of digits=%d",s);
  printf("\n");
}
