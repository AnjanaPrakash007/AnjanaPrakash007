#include<stdio.h>
int main()
{
    int num,count,fact=1;
    printf("enter the number for the factorial\n");
    scanf("%d", &num);
    for(count=1;count<=num;count++)
    {
      fact=fact*count;
    }
    printf("factorial of %d is %d\n",num,fact);
}
