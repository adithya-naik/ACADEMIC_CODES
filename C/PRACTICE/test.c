#include<stdio.h>
void main()
{
	int x,n;
	int s=1,p=1,i=0;
	printf("Enter x and n : ");
	scanf("%d", &x, &n);
	if(x>0&&n>0)
	{
		for(i=0;i<=n-1;i++){
			p=p*x;
			s=s+p;
		}
		printf("Sum of series: %d\n",s);
	}
	else{
		printf("Illegal values\n");
	}
}
