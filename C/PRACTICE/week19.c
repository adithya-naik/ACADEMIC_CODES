#include <stdio.h>
 
int main()
{
	int n, r;
	printf("Input a decimal number\n");
	scanf("%d", &n);
	
	for(;n!=0;){
		r=n%2;
		printf("%d",r);
	}
	return 0;
}
 
