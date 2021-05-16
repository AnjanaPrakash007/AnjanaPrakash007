#include<stdio.h>
#include<math.h>
int main()
//bmi calculator
{
    float h,w,bmi;
    printf("enter the weight in kg\n");
    scanf("%f", &w);
    printf("enter the height in metre\n");
    scanf("%f",&h);
//bmi equation
    bmi = w/(h*h);

    if(bmi<15)
    {
      printf("your bmi is starvation\n");
    }
    else if(bmi>=15.1&& bmi<=17.5)
    {
      printf("your bmi is aneroxic\n");
    }
    else if(bmi>=17.5 && bmi<=18.5)
    {
      printf("your bmi is under weight\n");
    }
    else if(bmi>=18.6 && bmi<=24.9)
    {
      printf("your bmi is ideal\n");
    }
    else if(bmi>=25 && bmi<=25.9)
    {
      printf("your bmi is over weight\n");
    }
    else if(bmi>=30 && bmi<=30.9)
    {
      printf("your bmi is obese\n");
    }
    else if(bmi>=40)
    {
      printf("your bmi is morbidly obese\n");
    }
    else
    {
      printf("wrong entry");
    }
}
