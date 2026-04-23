#include <stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total;
	float avg;
	printf("Enter marks for 5 subjects: ");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	if(m1<40||m2<40||m3<40||m4<40||m5<40)
	{
		printf("You have failed.");
	}
	else
	{
		total = m1+m2+m3+m4+m5;
		avg = total/5;
		if(avg >=75)
		{
			printf("Distinguished.");
		}
		else if(avg >=60 && avg <75)
		{
			printf("First Division.");
		}
		else if(avg >=50 && avg <60)
		{
			printf("Second Division.");
		}
		else if(avg >=40 && avg <50)
		{
			printf("Third Division.");
		}
	}
}
