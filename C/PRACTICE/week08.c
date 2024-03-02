#include <stdio.h>
 
int main()
{
	int t, i, s=0, sum=0;
	printf("Input the number of terms :\n");
	scanf("%d", &t);
	for(i=1;i<=t;i++){
	s=10*s+1;
	sum=sum+s;
	}
	printf("the sum is %d", sum);
	return 0;
}
 
