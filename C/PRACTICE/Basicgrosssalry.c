#include <stdio.h>
 
int main()
{
	int bs, gs;
	printf("Enter the Basic salary:\n");
	scanf("%d",&bs);
	if(bs<=10000){
		printf("Your Basic salary is less than or equal to 10000\n");
		gs=bs+(20*bs)/100+(80*bs)/100;
		printf("Your Gross Salary is %d",gs);
		}	
  else if(bs<=20000){
		printf("Your Basic salary is less than or equal to 20000\n");
		gs=bs+(25*bs)/100+(90*bs)/100;
		printf("Your Gross Salary is %d",gs);
		}
  else{
		printf("Your Basic salary is less than or equal to 20000\n");
		gs=bs+(30*bs)/100+(95*bs)/100;
		printf("Your Gross Salary is %d",gs);
		}
		
	return 0;
}
 
