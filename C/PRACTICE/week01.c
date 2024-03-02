#include <stdio.h>
 
int main()
{
	int n,i,sum=0;
	
	printf("the natural numbers are :\n",n);
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	sum=sum+i;
	}
	printf("the sum is : %d", sum);
	return 0;
}
 
