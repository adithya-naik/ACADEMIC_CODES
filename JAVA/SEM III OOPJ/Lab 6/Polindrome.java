import java.util.*;
class Polindrome{
public static void main(String args[]){
StringBuffer name = new StringBuffer();
Scanner s = new Scanner(System.in);
System.out.println("Enter the string : ");
String name1 = s.next();
name.append(name1);
StringBuffer name2 = name.reverse();
if(name == name2){
System.out.println("Yes");
}
else{
System.out.println("No");
}
}
}