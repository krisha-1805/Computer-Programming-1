//Convert celcius into Fahrenheit. F=(9/5*C)+32

#include<stdio.h>
int main()
{
   float f,c;
   printf("Enter the temperature in celcius=");
   scanf("%f",&c);
   f=(9*c/5)+32;
   printf("%f temperature in Fahrenheit=%f",c,f);
   return 0;
}
