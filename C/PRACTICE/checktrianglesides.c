#include <stdio.h>
 
int main()
{
	int s1, s2, s3;
	printf("Enter the sides os a triangle");
	scanf("%d%d%d", &s1, &s2, &s3);
	printf("%d %d %d\n", s1, s2, s3);
	if(s1+s2>s3 && s2+s3>s1 && s3+s1>s2)
	{
		printf("Triangle is formed");
	}
	else
	{
		printf("Triangle is not formed");
	}
	
	return 0;
}
 
