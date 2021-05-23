//sum of series 1/1!+2/2!+........7/7!//
#include<stdio.h>

void main()
{
  float num=1,sum=0,count,fact;
  while(num<=7)
  {
    fact=1;
    for(count=1;count<=num;count++)
    {
      fact=fact*count;
    }
    sum=sum+(num/fact);
    num++;
  }
  printf("sum of series%f\n",sum);
}
