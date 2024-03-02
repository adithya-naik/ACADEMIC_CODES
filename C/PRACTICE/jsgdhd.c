#include <stdio.h>
 
int main()
{
	int i=1;
	while(i<13)
	{
		printf("The number is %d\n", i);
		i=i;
		i=i+1;
	}
	return 0;
}
 
