import java.util.Scanner;
class Main21
{
public static void main(String[] args){
Scanner input = new Scanner(System.in);
int num1 = input.nextInt();
int num2 = input.nextInt();
int Largest = num1>num2 ? num1 : num2 ;
System.out.println(Largest);
input.close();
}
}