#include<stdio.h>
void main()
{
  int pop,i;
  printf("enter the present population:");
  scanf("%d",&pop);
  //last 10 years
  for(i=1;i<=10;i++)
  { //pop increase 10% for last 10 years
    pop=pop-pop*0.1;
    printf("%d year:%d\n",i,pop );
  }

}
