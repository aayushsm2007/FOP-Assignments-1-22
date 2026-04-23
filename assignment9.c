#include <stdio.h>
int main()
{
	int n,sum=0,a,temp;
	printf("Enter number: ");
	scanf("%d",&n);
	temp = n;
	while(temp!=0)
	{
		a = temp%10;
		sum += a*a*a;
		temp = temp/10;
	}
	if(sum == n)
	{
		printf("It is Armstrong number.");
	}
	else
	{
		printf("Not Armstrong Number.");
	}
}
