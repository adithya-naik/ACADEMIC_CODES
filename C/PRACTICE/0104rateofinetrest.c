#include <stdio.h>
 
int main()
{
	int p, t, r;
	float si, tot;
	
	printf("Enter principal amount,time in months and rate of interest: \n");
	scanf("%d%d%d", &p, &t, &r);
	si=(p*t*r)/100;
	printf("The simple interest is = %.2f ₹\n", si);
	tot=p+si;
	printf("The total amount is : %.2f ₹", tot);
	
	return 0;
}
 
