//Calculate area and perimeter of rectangle. A=L*B, P=2(L+B)

#include <stdio.h>
int main()
{
    int L,B,A,P;
    printf("Enter length of rectangle: ");
    scanf("%d", &L);
    printf("Enter breadth of rectangle: ");
    scanf("%d", &B);
    A=L*B;
    P=2*(L+B);
    printf("Area=%d\nPerimeter=%d",A,P);
    return 0;
}
