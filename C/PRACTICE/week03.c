#include <stdio.h>
 
int main()
{
	int t,i,s=1;
	printf("Enter the number of terms : ");
	scanf("%d\n",&t);
	for(i=1;i<=t;i++){
		s=i*i*i;
	  printf("number is %d\n",i);
	  printf("the cube of the %d is %d\n", i, s);
	 }
		
	return 0;
}
 
