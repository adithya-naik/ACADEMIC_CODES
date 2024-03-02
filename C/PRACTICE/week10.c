#include <stdio.h>
 
int main()
{
	int n, i, rem, sum=0;
	
	printf("Enter the number\n");
	scanf("%d", &n);
	while(n!=0){
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
		printf("the sum of individual digits in the givin number is  %d", sum);
	return 0;
}
 
