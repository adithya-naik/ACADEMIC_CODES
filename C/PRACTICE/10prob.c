#include <stdio.h>
 
int main()
{

	char y;
	printf("Enter the character:\n");
	scanf("%c", &y);
	printf("ASCII VALUE IS : %d",y);
	if(y>=97&&y<=122){
	  printf("\nIts a alphabet");
	}
	else if(y>=65&&y<=90){
		printf("\nIts a alphabet");
	}
	else{
		printf("\nIts not a alphabet");
	}
	return 0;
}
 