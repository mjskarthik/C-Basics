#include <stdio.h>
void main()
{
   float r,area,circumference;
	printf("Enter a number");
	scanf("%f",&r);
	area=3.14*r*r;
	printf("Area of the circle of radius %f is %f",r,area);
	circumference=2*3.14*r;
	printf("\nCircumference of the circle of radius %f is %f",r,circumference);
	
	
}
