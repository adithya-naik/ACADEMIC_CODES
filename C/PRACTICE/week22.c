#include <stdio.h>
 
int main()
{
	int i, j, l, m;
	printf("Enter the no. of rows: ");
	scanf("\n%d", &i);
	printf("\n");
	for(l=0;l<i;l++){
		for(m=0;m<l+1;m++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
 
