#include <stdio.h>

int main()
{
	int r1,r2, h2;
	float ac,vc;
	float PI=3.14;
	printf("Enter the radius of the circle : \n");
	scanf("%d", &r1);
	ac=PI*r1*r1;
	printf("The area of the circle is = %f\n", ac);
	printf("Enter the radius and height of the cylinder : \n");
	scanf("%d%d", &r2, &h2);
	vc=PI*r2*r2*h2;
	printf("The volume of the cylinder is = %f", vc);
	
	return 0;
}
 
