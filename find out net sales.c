//find out net sales where net sales=gross sales-discount. If gross sales>20000, discount is 15%. If gross sales>10000, discount is 10% otherwise 5%

#include <stdio.h>
int main()
{
    float gross_sales, discount, net_sales;
    printf("Enter gross sales: ");
    scanf("%f", &gross_sales);
    if (gross_sales > 20000)
    {
        discount = gross_sales * 0.15;
    }
    else if (gross_sales > 10000)
    {
        discount = gross_sales * 0.10;
    }
    else
    {
        discount = gross_sales * 0.05;
    }
    net_sales = gross_sales - discount;
    printf("Gross Sales: %.2f\n", gross_sales);
    printf("Discount: %.2f\n", discount);
    printf("Net Sales: %.2f\n", net_sales);
    return 0;
}
