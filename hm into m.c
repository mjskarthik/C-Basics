#include <stdio.h>
void main()
{
	int hours,minutes,time;
	printf("Give hours and minutes");
	scanf("%d%d",&hours,&minutes);
	time=(hours*60)+ minutes;
	printf("%d minutes",time);
}
