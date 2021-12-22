#include <stdio.h>
void main()
{
	int a,b,sum,difference,product,quotient,remainder;
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
	
	sum=a+b;
	printf("Sum of %d and %d is %d",a,b,sum);
	
	difference=a-b;
	printf("\nDifference of %d and %d is %d",a,b,difference);
	
	product=a*b;
	printf("\nProduct of %d and %d is %d",a,b,product);
	
	quotient=a/b;
	printf("\nQuotient of %d and %d is %d",a,b,quotient);
	
	remainder=a%b;
	printf("\nRemainder of %d and %d is %d",a,b,remainder);
	
}
