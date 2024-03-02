import java.util.*;
public class Main {
	public static void main(String[]   args) {
		Scanner s = new Scanner(System.in);
		int num = s.nextInt();
		for(int i=2;i<=num;i++){
		    int c=0;
		    for(int j=1;j<=num;j++){
		        if(i%j==0){
		           
		             c= c+1;
		    }
	}
	if(c==2){
	    System.out.println(i);
}
	}
}
}