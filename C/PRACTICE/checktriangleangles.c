#include <stdio.h>
 
int main()
{
	int a1, a2, a3;
	printf("Enter the angles of a triangle:");
	scanf("%d%d%d", &a1, &a2, &a3);
	printf("%d %d %d\n", a1, a2, a3);
	if(a1+a2+a3==180 && a1>0 && a2>0 && a3>0)
	{
		printf("Triangle is formed by these angles");
	}
	else
	{
		printf("Triangle is not formed from these angles");
	}
	return 0;
}
 
