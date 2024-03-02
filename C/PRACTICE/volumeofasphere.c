/*
	C Program for volume of a sphere
*/
	
#include <stdio.h>
#include <math.h>
int main()
{
	float r,v;
	printf("Enter the radius of the sphere:");
	scanf("%f", &r);
	printf("%f\n", r);
	v=(4/3.0)*3.14*r*r*r;
	printf("The volume of the sphere is :%f", v);
	return 0;
}
 
