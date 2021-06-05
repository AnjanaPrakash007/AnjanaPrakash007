#include<stdio.h>
//function prototype declaration
int calsum(int a,int b);
int main()
{
  int a,b,sum;
  printf("enter any 2 numbers:");
  scanf("%d%d",&a,&b);
  //function call
  sum=calsum(a,b);
  printf("sum=%d\n",sum);
  return 0;
}
int calsum(int a,int b)//function definition
{
  int sum;
  sum=a+b;
  return(sum);
}
