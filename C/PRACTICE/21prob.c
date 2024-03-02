#include <stdio.h>
 
int main()
{
	float p, c, b, m,com, per;
	printf(" Enter the marks in physics, chemistry ,biology, maths and computer out of 100:\n");
	scanf("%f%f%f%f%f",&p, &c, &b, &m, &com);
	per=(p+c+b+m+com)*100/500;
	printf(" Your total percentage is : %5.2f", per);
	if(per>=90){
		printf("\nGrade A");
	}	
	else if(per>=80){
		printf("\nGrade B");
	} 	
	else if(per>=70){
		printf("\nGrade C");
	}	
	else if(per>=60){
		printf("\nGrade D");
	}	
	else if(per>=40){
		printf("\nGrade E");
	}	
	else{
		printf("\nGrade F");
	}
	
		
	return 0;
}
 
