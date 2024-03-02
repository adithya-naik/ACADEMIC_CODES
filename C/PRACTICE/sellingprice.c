#include <stdio.h>
 
int main()
{
  float cp, pp, sp;
  printf("Enter the Cost price and Profit percent;\n");
  scanf("%f%f", &cp, &pp);
  sp=cp+(pp/100*cp);
  printf("The selling price is : %f", sp);
	return 0;
}
 
