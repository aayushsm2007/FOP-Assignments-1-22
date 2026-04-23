
#include <stdio.h>
int factcalc(int x)
{
        if(x==0)
        {
                return 1;
        }
        else
        {
                return x*factcalc(x-1);
        }
}
int main()
{
	int n,fact;
	printf("Enter number: ");
	scanf("%d",&n);
	fact = factcalc(n);
	printf("Factorial is %d",fact);
}
