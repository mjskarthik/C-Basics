#include <stdio.h>
void main()
{
	float p,t,r,simple_interest;
	printf("Enter principal, time and rate of interest");
	scanf("%f%f%f",&p,&t,&r);
	simple_interest=(p*t*r)/100;
	printf("\nSimple interest when principal is %f,time %f and rate of interest %f is %.2f",p,t,r,simple_interest);
	
}
