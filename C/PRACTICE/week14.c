
 
#include <stdio.h>
 
int main()
{
	int i, t,s,e,c=0;
	t=s;
	printf("input the starting number of range\n");
	scanf("%d",&s);
	printf("Input the ending number of range\n");
	scanf("%d", &e);
	printf("The prime numbers between %d &  %d are ",s, e);
	for(i=1;i<=e;i++){
		if(t%s==0){
			c=c+1;
			printf("%d\n",t);
		}
	}
	return 0;
}
 
