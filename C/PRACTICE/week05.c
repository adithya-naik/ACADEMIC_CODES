#include <stdio.h>
 
int main()
{
	int n, i, o, s=0;
	printf("Inputnumber of terms :\n");
	scanf("%d\n", &n);
	printf("The odd numbers are\n ");
	for(i=1;i<2*n;i=i+2){
		o=i;
		s=s+o;
		
		printf("%d ", o);
	}
	printf("sum= %d", s);
	return 0;
}
 
