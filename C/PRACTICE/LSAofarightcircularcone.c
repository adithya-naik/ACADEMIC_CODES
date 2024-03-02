#include <stdio.h>
#include<math.h>
int main()
{
	float r, h, a;
	printf("Enter the radius and height of the right circular cone :");
		scanf("%f%f", &r, &h);
		a=3.14*r*sqrt(h*h+r*r);
		printf("The LSA of right circular cone is %f", a);
	return 0;
}


 
