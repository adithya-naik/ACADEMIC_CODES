#include <stdio.h>
 
int main()
{
	int u,bill,total;
	printf("Enter the number of units:\n");
	scanf("%d", &u);
	if(u<=50){
		bill=u*0.50;
	}
	else if(u<=150){
		bill=25+(u-50)*0.75;
	}
	else if(u<250){
		bill=25+75+(u-150)*1.20;
	}
	else{
		bill=25+75+120+(u-250)*1.50;
	}
	printf("You have to pay extra of 20 percentage as extra surcharge\n");
	total=bill+(bill*20)/100;
	printf("The total bill is %d", total);
	
	
	
	return 0;
}
 
