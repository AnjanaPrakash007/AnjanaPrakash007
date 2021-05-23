//prime numbers in range
#include<stdio.h>
void main()
{
  int r,i,sum=0;
  printf("enter the range:");
  scanf("%d",&r);
  i=1;
  while(i<=r)
  {
    if(r%i==0)
    sum++;
    if(sum==2)
    printf("%d\t",i);
    i++;
  }

}
