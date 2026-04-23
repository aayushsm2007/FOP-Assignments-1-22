#include <stdio.h>
int main()
{
	int a,b,n;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("Enter 1 for + , 2 for - , 3 for * , 4 for / : ");
	scanf("%d",&n);
	switch(n)
	{
	    case 1:
	        int c = a+b;
	        printf("Sum: %d",c);
	        break;
	    
	    case 2:
	        int d = a-b;
	        printf("Difference: %d",d);
	        break;
	    
	    
	    case 3:
		int e = a*b;
		printf("Product: %d",e);
		break;
		
	    case 4:
	        float f = (float) a/b;
	        printf("Division: %.2f",f);
	        break;
	    
	    default:
		 printf("Wrong input.");
		 break;
	  }
	  return 0;
}
	      
	    
	
	
