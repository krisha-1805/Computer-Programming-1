//Calculate area of triangle. A=H*L/2

#include <stdio.h>
int main()
{
    int h,l;
    float a;
    printf("Enter height of triangle: ");
    scanf("%d",&h);
    printf("Enter base length of triangle: ");
    scanf("%d",&l);
    a=h*l/2;
    printf("Area=%f",a);
    return 0;
}
