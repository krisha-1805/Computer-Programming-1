//add,subtract,multiply and divide two numbers

#include<stdio.h>
int main()
{
    int a,b,sum,sub,mult;
    float divi;
    printf("Enter two values=");
    scanf("%d %d",&a,&b);
    sum=a+b;
    sub=a-b;
    mult=a*b;
    divi=(float)a/b;
    printf("sum=%d\nsub=%d\nmult=%d\ndiv=%f\n",sum,sub,mult,divi);
    return 0;
}
