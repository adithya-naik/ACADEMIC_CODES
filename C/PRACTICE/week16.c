#include <stdio.h>
 
int main()
{
	int n,rem,rev=0;
	printf("Input the number: \n");
	scanf("%d", &n);
	for(;n!=0;){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("the reverse number = %d",rev);
	
	return 0;
}
 
