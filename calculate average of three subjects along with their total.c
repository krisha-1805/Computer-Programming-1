//calculate average of three subjects along with their total


#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,total;
    float avg;
    printf("Enter your marks in subject 1=");
    scanf("%d",&sub1);
    printf("Enter your marks in subject 2=");
    scanf("%d",&sub2);
    printf("Enter your marks in subject 3=");
    scanf("%d",&sub3);
    total=sub1+sub2+sub3;
    avg=(float)total/3;
    printf("total=%d\navg=%f",total,avg);
    return 0;
}
