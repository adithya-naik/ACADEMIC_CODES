#include <stdio.h>
 
int main()
{
	int n,rem,rev=0,k;
	printf("Input the number: \n");
	scanf("%d", &n);
	k=n;
	for(;n!=0;){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;

	}
	if(rev==k){
		printf("%d is palindrome",k);
	}
	else{
		printf("%d is not palindrome",k);
	}
	
	return 0;
}