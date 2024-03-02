#include <stdio.h>
 
int main()
{
	int i=1, n, sum=0;
	float avg;
	printf("Enter 10 numbers :\n");
	for(i=1;i<=10;i++){
		scanf("%d",&n);
		sum=sum+n;
	}
	printf("The sum of 10 numbers = %d\n", sum);
	avg=(sum)/10;
	printf("The avg of 10 numbers = %f\n", avg);
	return 0;
}
 
