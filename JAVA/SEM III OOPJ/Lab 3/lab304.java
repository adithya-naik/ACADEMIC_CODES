import java.util.*;
class Main4{
public static void main(String args[]){
Scanner s = new Scanner(System.in);
int days = s.nextInt();
int years= days/365;
int remdays=days%365;
int weeks=remdays/7;
int days2=remdays%7;
System.out.println(years + "Years" + "," + weeks+"Weeks and" + days2+" Days.");
}
}