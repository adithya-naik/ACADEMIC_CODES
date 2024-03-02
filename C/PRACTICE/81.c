#include <stdio.h>
int main(){
	int a;
	int* pa=&a;
	*pa=23;
	printf("%p",&a);
return 0;
}
