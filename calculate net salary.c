//calculate net salary where net salary=gross salary + allowance - deduction. Allowances are 10%  while deductions are 3% of gross salary

#include<stdio.h>
int main()
{
    float ns,gs,a,d;
    printf("Enter your gross salary: ");
    scanf("%f",&gs);
    a=10*gs/100;
    d=3*gs/100;
    ns=gs+a-d;
    printf("Your net salary is %f",ns);
    return 0;
}
