#include <stdio.h>
 
int main()
{
	int number,x;
	int i=1;
	printf("Enter the number: \n");
	scanf("%d", &number);
	while(i<=number)
	
	{
		x=number*i;
		printf("%d*%d=%d\n",number,i,x);
		i=i+1;
	}
	return 0;
}
 
