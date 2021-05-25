//print pattern
#include<stdio.h>
int main()
{
  int n,i,j,k,count=1;
  //no of rows
  printf("enter the no of rows:");
  scanf("%d",&n);

  //printing rows
  for(i=1;i<=n;i++)
  {
    //spacing
    for(j=1;j<=(n-i);j++)
    {
      printf("\t");
    }
    //printing numbers
    for(k=1;k<=i;k++)
    {
      printf("%d\t\t",count++);
    }
    printf("\n");
  }
}
