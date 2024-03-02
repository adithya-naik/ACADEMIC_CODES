#include <stdio.h>
 
int main()
{
	int s1, s2, s3;
	printf("Enter the sides of a triangle:");
	scanf("%d%d%d", &s1, &s2, &s3);
	printf("%d %d %d\n", s1, s2, s3);
	if(s1==s2 && s2==s3 && s3==s1)
	{
		printf("Its a Equilateral triangle");
	}
	else if(s1==s2 || s2==s3 || s3==s1)
	{
		printf("Its a Isosceles triangle");
	}
	else
	{
		printf("Its a scalene triangle");
	}
		
	return 0;
}
 
