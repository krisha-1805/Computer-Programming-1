//convert dollars into pounds where 1$=48Rs and 1 pound= 70Rs

#include<stdio.h>
int main()
{
    int a,b;
    float c;
    printf("Enter value in dollars=");
    scanf("%d",&a);
    b=a*48;
    c=(float)b/70;
    printf("value of %d dollars in pounds is %f",a,c);
    return 0;
}
