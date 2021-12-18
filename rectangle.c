#include <stdio.h>
void main()
{
	int l,b,area,perimeter;
	printf("Give values for length and breadth ");
	scanf("%d%d",&l,&b);
    area= l*b;
    printf("Area of the rectangle of length %d and breadth %d is %d",l,b,area);
    perimeter=2*(l+b);
    printf("\nPerimeter of the rectangle of length %d and breadth %d is %d",l,b,perimeter);
    
}
