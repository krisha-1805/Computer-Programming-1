//Calculate area of circle. A=22/7*R*R

#include <stdio.h>
int main()
{
    int R;
    float A;
    printf("Enter radius of circle: ");
    scanf("%d", &R);
    A=3.14*R*R;
    printf("Area=%f",A);
    return 0;
}
