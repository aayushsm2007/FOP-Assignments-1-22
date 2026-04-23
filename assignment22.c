#include <stdio.h>
#include <string.h>
int main()
{
	int choice;
	char str1[25];
	char str2[25];
	printf("Enter 1 for length, 2 for compare, 3 for copy, 4 for concatenate:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			printf("\nEnter string:");
			scanf(" %[^\n]",str1);
			printf("\n%d",strlen(str1));
			break;
		}
		case 2:
		{
			printf("\nEnter string 1:");
			scanf(" %[^\n]",str1);
			printf("\nEnter string 2:");
			scanf(" %[^\n]",str2);
			int c = strcmp(str1,str2);
			if(c==0)
			{
				printf("Both strings are equal.");
			}
			else
			{
				printf("Not equal.");
			}
			break;
		}
		case 3:
		{
			printf("\nEnter string 1:");
			scanf(" %[^\n]",str1);
			printf("\nEnter string 2:");
			scanf(" %[^\n]",str2);
			strcpy(str1,str2);
			printf(" %s \n %s",str1,str2);
			break;
		}
		case 4:
		{
			printf("\nEnter string 1:");
			scanf(" %[^\n]",str1);
			printf("\nEnter string 2:");
			scanf(" %[^\n]",str2);
			strcat(str1,str2);
			printf(" %s\n",str1);
			break;
		}
		default:
		{
			printf("Wrong Choice.");
			break;
		}	
	}
}
