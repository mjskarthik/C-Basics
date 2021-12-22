//This is a C program for finding the sum of first n natural numbers
#include <stdio.h>
void main()
{
	int n,s;
	printf("Enter the a number");
	scanf("%d",&n);
	
	s= n*(n+1)/2;
	printf("\nSum of the first %d natural numbers is %d",n,s);
}
