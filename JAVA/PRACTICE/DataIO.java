import java.io.*;
import java.util.Scanner;
public class DataIO
{
public static void main(String args[])throws FileNotFoundException,IOException
{
FileOutputStream fos = new FileOutputStream("c:/a.txt");
DataOutputStream dos = new DataOutputStream(fos);
Scanner s = new Scanner(System.in);
System.out.println("Enter First Number:");
int num1 = s.nextInt();
System.out.println("Enter Second Number:");
int num2 = s.nextInt();
dos.writeInt(num1);
dos.writeInt(num2);
fos.close();
 // read num1 and num2 from file and perform add, sub, multi, div and display results
FileInputStream fis = new FileInputStream("c:/a.txt");
DataInputStream dis = new DataInputStream(fis);
int n1 = dis.readInt();
int n2 = dis.readInt();
int sum = n1 + n2;
int sub = n1 - n2;
int mult = n1 * n2;
float div = (float)n1/(float)n2;
System.out.println("Addition of"+n1+"and"+n2+"is:"+sum);
System.out.println("Subtraction of"+n1+"and"+n2+"is:"+sub);
System.out.println("Multiplication of"+n1+"and"+n2+"is:"+mult);
System.out.println("Division of"+n1+"and"+n2+"is:"+div);
fis.close();
fos = new FileOutputStream("c:/a.txt",true);
dos = new DataOutputStream(fos);
dos.writeUTF("Addition = "+sum);
dos.writeInt(sum);
dos.writeUTF("Subtraction = "+sub);
dos.writeUTF("Multiplication = "+mult);
dos.writeUTF("Division = "+div);
fos.close();
}
}

