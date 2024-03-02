#include<stdio.h>
int main()
{
	int s, e,k,i, r, a, sum;
	printf("Enter the starting and ending limits :");
	scanf("%d%d",&s,&e);
	
	printf("The Armstrong numbers betweer given range arr \n");
	k=i;
	for(i=s;i<=e;i++){
		
		for(;i!=0;){
			r=i%10;
			a=r*r*r;
			sum=sum+a;
			
	if(sum==i){
			printf("%d",i);
			i=i/10;
			}
		}
	
	}
	return 0;
}
