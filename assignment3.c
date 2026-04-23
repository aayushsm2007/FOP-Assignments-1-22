#include <stdio.h>
int main()
{
    int a,x=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(x <=10)
    {
        int n = a*x;
        printf("%d x %d is %d.\n",a,x,n);
        x++;
    }
}

