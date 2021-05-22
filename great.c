#include<stdio.h>
void main()
{
  int num1,num2,num3;
  printf("enter the 3 numbers:");
  scanf("%d%d%d",&num1,&num2,&num3);


    if(num1>num2 && num1>num3)
    {
      printf("%d is greater",num1);
    }
    else if(num2>num1 && num2>num3)
    {
      printf("%d is greater",num2);
    }
    else(num3>num2 && num3>num1);
    {
      printf("%d is greater",num3);
    }

    printf("\n");
}
