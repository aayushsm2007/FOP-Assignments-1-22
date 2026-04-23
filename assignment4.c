#include <stdio.h>
int main()
{
    float gsal,hra,ta,ptax,bp,ns;
    printf("Enter basic pay: ");
    scanf("%f",&bp);
    hra = 0.1 * bp;
    ta = 0.05 * bp;
    gsal = bp + hra + ta;
    ptax = 0.02 * gsal;
    ns = gsal - ptax;
    printf("Net Salary: %.2f",ns);
}

