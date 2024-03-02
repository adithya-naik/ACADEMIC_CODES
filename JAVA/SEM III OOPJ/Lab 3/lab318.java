import java.util.*;
class Main18{
public static void main(String args[]){

Scanner s = new Scanner(System.in);
int time=s.nextInt();


if(time>=4 && time<12){
System.out.println("Good Morning");
}
else if(time>=12 && time<16){
System.out.println("Good Afternoon");
}
else if(time>=16 &&time<20){
System.out.println("Good Evening");
}
else System.out.println("Good Night");
}
}
