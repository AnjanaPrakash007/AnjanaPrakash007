//possible combination of 3 numbers
#include<stdio.h>
int main()
{
  int i,j,k,a[3];
  //storing the number in array
  printf("enter the first number");
  scanf("%d",&a[0]);
  printf("enter the second number");
  scanf("%d",&a[1]);
  printf("enter the third number");
  scanf("%d",&a[2]);
  //each loopwill run from 0 to 2
  //if the value in the 3 index are diffrent then print it

  for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    {
      for(k=0;k<=2;k++)
      {
        if(i!=j && j!=k && k!=i)
        {
          printf("[%d %d %d]\n",a[i],a[j],a[k]);
        }
      }
    }
  }
}
