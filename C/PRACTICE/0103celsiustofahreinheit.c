#include <stdio.h>
 
int main()
{
	float c, f;
	printf("Enter the temperature in °c = \n");
	scanf("%f", &c);
	f=(c*9/5)+32;
	printf("The temperature in °F is =%f", f);
	return 0;
}
 
