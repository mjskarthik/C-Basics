//This is a program to find the area and perimeter of a square of given side.
#include <stdio.h>
void main()
{
	int side,area,perimeter;
	printf("Give a value for the side ");
	scanf("%d",&side);
	
	area=side*side;
	printf("\nArea of the square of side %d is %d",side,area);
	
	perimeter=4*side;
	printf("\nPerimeter of the square of side %d is %d",side,perimeter);
	
}
