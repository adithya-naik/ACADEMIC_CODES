#include <stdio.h>
 
int main()
{
  int p, c, m, b, cp, max, total;
  float per;
  printf("Enter the marks in Physics, Chemistry, Maths, Biology and Computer :");
  scanf("%d%d%d%d%d%d", &p, &c, &m, &b, &cp, &max);
  printf("%d %d %d %d %d\n",p, c, m, b, cp);
  total=p+c+m+b+cp;
  per=(total)/(5.0*max)*100;
  printf("You have got %f\n",per);
  if(per>=90)
  {
  	printf("You have passed in A grade");
  }
  else if(per>=80)
  {
  	printf("You have passed in B grade");
  }
  else if(per>=70)
  {
  	printf("You have passed in C grade");
  }
  else if(per>=60)
  {
  	printf("You have passed in D grade");
  }
  else if(per>=40)
  {
  	printf("You have passed in E grade");
  }
  else 
  {
  	printf("You have failed the exam.. So, work hard.. Better luck next time");
  }
	return 0;
}
 
