import java.util.*;
class Main17{
public static void main(String args[]){

Scanner s = new Scanner(System.in);
int marks=s.nextInt();


if(marks>85){
System.out.println("A");
}
else if(marks<=85 && marks>70){
System.out.println("B");
}
else if(marks>=60 && marks<=70){
System.out.println("C");
}
else System.out.println("F");
}
}