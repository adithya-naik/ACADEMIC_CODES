#include <stdio.h>
 
int main()
{
	int num;
	printf("Enter the month number:");
	scanf("%d", &num);
	printf("%d\n", num);
	if(num==1 || num==3 || num==5 ||num==7  || num==8 || num==10 || num==12)
	{
		printf("This month has 31 days");
	}
	else if(num==2)
	{
		printf("This month has 28 or 29 days");
	}
	else
	{
		printf("This month has 30 days");
	}
	
	return 0;
}
 

