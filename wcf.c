#include<stdio.h>

#include<math.h>
void main()

{
  float v,t,wcf;
  printf("enter the wind velocity in miles per hour:");
  scanf("%f",&v);
  printf("enter the temprature in degree fahrenheit:");
  scanf("%f", &t);

  wcf=35.74 + (0.6215*t) + (0.4275*t-35.75) * pow(v,0.16);
  printf("wind chill factor is %f",wcf);

}
