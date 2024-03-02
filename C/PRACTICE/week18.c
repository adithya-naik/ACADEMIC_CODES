#include <stdio.h>
 
int main()
{
	int s, e, i, sum=0;
	printf("Enter the starting and ending limits\n");
	scanf("%d%d", &s, &e);
	for(i=s;i<=e;i++){
		if(i%9==0){
			printf("%d\n", i);
			sum=sum+i;
		}
	}
	printf("The sum of numbers between %d and %d , divisible by 9 is %d\n", s, e, sum);
	return 0;
}
 
