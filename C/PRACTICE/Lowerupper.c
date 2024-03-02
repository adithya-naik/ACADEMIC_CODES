#include <stdio.h>
 
int main()
{

	char y;
	printf("Enter the character:\n");
	scanf("%c", &y);
	printf("ASCII VALUE IS : %d",y);
	if(y>=97&&y<=122){
	  printf("\nIts a lowercase alphabet");
	}
	else if(y>=65&&y<=90){
		printf("\nIts a uppercase alphabet");
	}
	else{
		printf("\nEntered character is other than lowercase and uppercase alphabet");
	}
	return 0;
}
 
