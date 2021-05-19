#include<stdio.h>
int main()
{
  for(int a=0;a<10;a++)
  {
    for(int b=1;b<a;b++)
    {
      for(int c=1;c<b;c++)
      {
        printf("*");
      }
      printf("\n");
    }
    printf("\n");
  }
  
}
