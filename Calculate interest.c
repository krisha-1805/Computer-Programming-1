//Calculate interest where I=PRN/100

#include <stdio.h>
int main()
{
    float p,r,n,i;
    printf("Enter Principal amount: ");
    scanf("%f",&p);
    printf("Enter Rate of interest: ");
    scanf("%f",&r);
    printf("Enter Time (in years): ");
    scanf("%f",&n);
    i = (p*r*n)/100;
    printf("Simple Interest = %f\n",i);
    return 0;
}
