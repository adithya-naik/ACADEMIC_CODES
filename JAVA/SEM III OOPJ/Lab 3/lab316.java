import java.util.*;
class Main16{
public static void main(String args[]){

Scanner s = new Scanner(System.in);
int n1=s.nextInt();
int n2=s.nextInt();
int a=n1%n2,b=n2%n1;
if(b>a){
System.out.println(a);
}


else System.out.println(b);
}
}