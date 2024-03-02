#include <stdio.h>
 
int main()
{
	int n,sum=0, i, m;
	n=m;
	printf("Enter the number \n");
	scanf("%d", &n);
	for(i=1;i<n;i++){
		m%i;
		printf("%d\n",m%i);
		sum=sum+i;
	}
	if(sum==n){
		printf("perfect num\n");
	}
	else{
		printf("not a perfect\n");
	}
	return 0;
}
 
