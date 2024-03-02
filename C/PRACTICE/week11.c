#include <stdio.h>
 
int main()
{
	int n, rem, a, sum=0,l;
	printf("Enter the number\n");
	scanf("%d", &n);
	l=n;
	for(;n!=0;){
		rem=n%10;
		a=rem*rem*rem;
		sum=sum+a;
		n=n/10;
	}
	if(sum==l){
		printf("%d is an amstrong number\n", l);
	}
	else{
		printf(" %d is Not an Armstrong number\n",l);
	}
	return 0;
}
 
