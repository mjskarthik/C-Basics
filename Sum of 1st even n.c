//This is a C program to find the sum of firdt n even natural numbers
#include <stdio.h>
void main()
{
	int n,sum;
	printf("Enter a number");
	scanf("%d",&n);
	
	sum=n*(n+1);
	printf("Sum of the first %d even natural numbers is %d",n,sum);
	
}
