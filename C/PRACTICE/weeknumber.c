#include <stdio.h>
 
int main()
{
  int num;
  printf("Enter the week day number :");
  scanf("%d",&num);
  printf("%d\n", num);
  if(num=1)
  {
  	printf("Its monday");
  }
  else if(num=2)
  {
  	printf("Its Tuesday");
  }
  else if(num=3)
  {
  	printf("Its Wednesday");
  }
  else if(num=4)
  {
  	printf("Its Thursday");
  }
  else if(num=5)
  {
  	printf("Its Friday");
  }
  else if(num=6)
  {
  	printf("Its Saturday");
  }
  else
  {
  	printf("Its sunday");
  }
	return 0;
}
 
