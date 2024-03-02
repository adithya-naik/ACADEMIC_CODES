#include <stdio.h>
 
int main()
{
	int i, t, c=0;
	printf("input the number\n");
	scanf("%d",&t);
	for(i=1;i<=t;i++){   
		if(t%i==0){
			c=c+1;
		}
	}
	if(c==2){
		printf("prime\n");
	}
	else{
		printf("composite\n");
	}
	return 0;
}
