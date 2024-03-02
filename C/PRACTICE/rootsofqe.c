#include <stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	float ans1, ans2;
	printf("Enter the values of a, b, c from the equation:");
	scanf("%d%d%d", &a, &b, &c);
	printf("%d %d %d\n", a, b, c);
	ans1=(-b+sqrt(b*b-4*a*c))/(2*a);
	ans2=(-b-sqrt(b*b-4*a*c))/(2*a);
	
	printf("The roots of the given equation is %5.2f,%5.2f", ans1, ans2);
	return 0;
}
 
