import java.util.*;
class Main9{
public static void main(String args[]){

Scanner s = new Scanner(System.in);
int M=s.nextInt();
int P=s.nextInt();
int C=s.nextInt();
if((M >= 70 && P >= 60 && C >= 60)){
System.out.println("PASS");
}
else if((M + P + C >= 180)){
System.out.println("TRUE");
}
else System.out.println("FALSE");
}
}