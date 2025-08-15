//convert Rs. into dollars where 1$=48Rs.

#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter value in Rs.=");
    scanf("%f",&a);
    b=a/48;
    printf("value of %f Rs. in dollars=%f",a,b);
    return 0;
}
