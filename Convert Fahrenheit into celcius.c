//Convert Fahrenheit into celcius. C=5/9*(F-32)

#include<stdio.h>
int main()
{
   float f,c;
   printf("Enter the temperature in Fahrenheit=");
   scanf("%f",&f);
   c=5*(f-32)/9;
   printf("%f temperature in celcius=%f",f,c);
   return 0;
}
