
#include <stdio.h>
 
int main()
{
	int i, j, l, m;
	printf("Enter the no. of rows: ");
	scanf("\n%d",&i);
	printf("\n");
	for(l=1;l<=i;l++){
		for(m=1;m<=l;m++){
			printf("%d",l);
		}
		printf("\n");
	}
	return 0;
}
 
