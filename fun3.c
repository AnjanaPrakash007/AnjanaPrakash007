
//square of number using function
#include<stdio.h>
int squarenum(int a);//function prototype declaration
int main()
{
  int a,s;
  printf("enter the number:");
  scanf("%d",&a);
  s=squarenum(a);//function call
  printf("s=%d\n",s);
  return 0;
}
int squarenum(int a)//function definition
{
  int s;
  s=a*a;
  return(s);
}
