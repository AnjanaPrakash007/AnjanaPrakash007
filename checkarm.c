//program to check the given number is armstrong or not
  //sum of cubes of each digits is equal to the same
  #include<stdio.h>
  void main()
  {
    int n,r,temp,c,sum=0;
    printf("enter the number");
    scanf("%d", &n);
    //recollecting number given first
    temp=n;
    while(n>0)
    {
      //seperating digits
      r=n%10;
      c=r*r*r;
      //adding cubes of each digits
      sum=sum+c;
      n=n/10;
      //finally n=0 loop stops
    }
    n=temp;

    if(sum==n)
    {
      printf("%d is an armstrong number",n);
    }
    else
    {
      printf("%d is not an armstrong number",n);
    }
  }
