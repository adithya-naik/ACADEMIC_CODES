import java.util.*;
public class Main {
	public static void main(String[] args) {
	Scanner s = new Scanner(System.in);
	int num = s.nextInt();
	int sum=0;
	int a=0;
	int b=1;
   System.out.println(a);
      System.out.println(b);	
	for(int i=0;i<num-2;i++){
	    sum=a+b;
	    System.out.println(sum);
	    a=b;
	    b=sum;
	    
	}
	}
}