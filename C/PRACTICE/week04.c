#include <stdio.h>
 
int main()
{
	int i, a, t;
	printf("Table to be calculated :\n");
	scanf("%d\n", &t);
	for(i=1;i<=10;i++){
	a=t*i;
	printf("%d*%d=%d\n", t, i, a);
}
	return 0;
}
 
