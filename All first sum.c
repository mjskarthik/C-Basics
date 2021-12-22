#include <stdio.h>
void main()
{
	int n,sum_1,sum_2,sum_3;
	printf("Enter a number");
	scanf("%d",&n);
	
	//Sum of first n natural numbers
	sum_1=n*(n+1)/2;
	printf("\nSum of the first %d natural numbers is %d",n,sum_1);
	
	
	//Sum of first n even natural numbers 
	sum_2=n*(n+1);
	printf("\nSum of the first %d even natural numbers is %d",n,sum_2);
	
	
	//Sum of first n odd natural numbers
	sum_3=n*n;
	printf("\nSum of the first %d odd natural numbers is %d",n,sum_3);
	
}
