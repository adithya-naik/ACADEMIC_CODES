#include <stdio.h>
 
int main()
{
	int t,sum=0, s, i;
	printf("Input the number of terms\n");
	scanf("%d\n", &t);
	printf("the square natural upto %d terms are ", t);
	for(i=1;i<=t;i++){
	s=i*i;
	printf("%d   \n", s);
	sum=sum+s;
	}
	printf("The sum of square of terms upto %d terms is %d\n", t, sum);
	
	return 0;
}
 
