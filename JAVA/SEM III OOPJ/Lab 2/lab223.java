import java.util.Scanner;
class Main23{
public static void main(String[] args){
Scanner input = new Scanner(System.in);
int num = input.nextInt();
boolean isDivisibleByFive=(num%5==0)?true :false;
System.out.println(isDivisibleByFive);
}
}