//LAB 5 
//B)
import java.util.*;
/*BankAccount Class --> to define Instance variables,Instance Methods and count variable and taking input from keyboard*/
class BankAccount{

//Instance Variables
String Name;
long Acc_no;
String Acc_type;
double Acc_bal;
static int count;
Scanner s = new Scanner(System.in);

//Parameterised Constructor
BankAccount(){
System.out.println("Enter the Account Holder Name : ");
Name=s.next();
System.out.println("Enter the Account Number : ");
Acc_no=s.nextLong();
System.out.println("Enter the Account Type : ");
Acc_type=s.next();
System.out.println("Enter the Available Balance : ");
Acc_bal= s.nextDouble();
count++;
}

//Instance Methods

void deposit(int amt){
System.out.println("Enter the Deposit Amount :"+amt);
Acc_bal+=amt;
System.out.println("Available Balance : "+ Acc_bal);
}

void withdraw(int amt){
if(amt>Acc_bal){
	System.out.println("Insufficient balance !!");
}
System.out.println("Enter the Withdrawal Amount :"+amt);
Acc_bal-=amt;
System.out.println("Available Balance : "+ Acc_bal);
}

void display(){
System.out.println("\n");
System.out.println("Account Holder Name : " + Name);
System.out.println("Account Number : " + Acc_no);
System.out.println("Account Type : " + Acc_type);
System.out.println("Available Balance : " + Acc_bal);
System.out.println("\n");
}
}

//ExecuteAccount Class --> to define Main Method

class ExecuteAccount{
public static void main(String args[]){
BankAccount ba1 = new BankAccount();
ba1.display();
System.out.println("\n");
System.out.println("Number of Account holders : "+BankAccount.count);

}
}
