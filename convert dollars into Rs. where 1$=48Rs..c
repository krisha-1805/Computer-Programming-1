//convert dollars into Rs. where 1$=48Rs.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value in dollars=");
    scanf("%d",&a);
    b=a*48;
    printf("value of %d dollars in Rs.=%d",a,b);
    return 0;
}
