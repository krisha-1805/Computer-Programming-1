//convert grams into kg

#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("Enter value in grams=");
    scanf("%d",&a);
    b=(float)a/1000;
    printf("value of %d grams in kg is %f",a,b);
    return 0;
}
