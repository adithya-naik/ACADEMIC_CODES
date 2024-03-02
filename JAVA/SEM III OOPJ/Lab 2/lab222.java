import java.util.Scanner;
class Main22
{
public static void main(String[] args){
Scanner input = new Scanner(System.in);
int a = input.nextInt();
int b = input.nextInt();
int c = input.nextInt();
int Largest = (a>=b) ? ((a>=c)?a:c) :((b>=c)?b:c)  ;
System.out.println(Largest + " is the largest among " +  a  +   b  + " , and" + c);
input.close();
}
}