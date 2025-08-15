//Calculate area and perimeter of square. A=L^2,P=4L

#include <stdio.h>

int main()
{
    int L,A,P;
    printf("Enter edge length of square: ");
    scanf("%d", &L);
    A=L*L;
    P=4L;
    printf("Area=%d\nPerimeter=%d",A,P);
    return 0;
}
