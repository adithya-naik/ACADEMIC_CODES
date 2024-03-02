#include <stdio.h>
 
int main()
{
	int n;
	printf("Enter the number : \n");
	scanf("%d", &n);
	if(n%97==0){
		printf("Divisible by 97\n");
	}
	else{
		printf(" Not Divisible by 97\n");
	}
	return 0;
}
 
