#include <stdio.h>
void main()
{   
    int time,hours,minutes;
    printf("Enter time");
    scanf("%d",&time);
    hours=time/60;
    printf("%d hours ",hours);
    minutes=time%60;
    printf("%d minutes",minutes);
	
}
