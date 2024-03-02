import java.util.*;
class Main14{
public static void main(String args[]){

Scanner s = new Scanner(System.in);
int n1=s.nextInt();
int n2=s.nextInt();

if((n1==6) || ((n1-n2==6)) ||(n1+n2==6)|| (n2==6)){
System.out.println("lucky");
}


else System.out.println("not lucky");
}
}