//calculate net sales where net sales=gross sales-10% discount of gross sales


#include<stdio.h>
int main()
{
    float ns,gs,d;
    printf("Enter gross sales=");
    scanf("%f",&gs);
    d=10*gs/100;
    ns=gs-d;
    printf("net sales=%f",ns);
    return 0;
}
