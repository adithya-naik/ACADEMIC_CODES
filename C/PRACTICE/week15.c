#include <stdio.h>
 
int main()
{
	int n,a=0, b=1, c, i;
	printf("Input the number of terms to display :\n");
	scanf("%d", &n);
	printf("%d  ", a);
	printf("%d  ", b);
	for(i=1;i<=n-2;i++){
		c=a+b;
		printf("%d   ", c);
		a=b;
		b=c;
		}
	
	
	return 0;
}
 

