#include <stdio.h>
 
int main()
{
	int f=1, n, i;
	printf("Input the number = \n");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		f=f*i; , 
	}
	printf("factorial of %d is %d", n, f);
	return 0;
}
 
