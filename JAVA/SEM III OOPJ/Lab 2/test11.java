import java.util.Scanner;
class Main{
    public static void main(String args[]){
      Scanner s = new Scanner(System.in);
     double a = s.nextDouble();
     double b = s.nextDouble();
     double c = s.nextDouble();
     double dis = b*b - 4*a*c;
     double r1,r2;
     double qq = Math.sqrt(dis);
     r1  = (-b + qq)/2*a;
     r2  = (-b - qq)/2*a;
     if(dis>=0){
     System.out.println(r1);
     System.out.println(r2);
     }
     else{
         System.out.println("Imaginary roots");
     }
    }
}