//LAB 5 
//A)
//BankAccount Class --> to define Instance variables and Methods
class BankAccount{

//Instance Variables
String Name;
long Acc_no;
String Acc_type;
double Acc_bal;

//Default Constructor
BankAccount(){
Name = "J.Adithya Naik";
Acc_no = 3091;
Acc_type = "Savings";
Acc_bal = 3000.00;
}

//Parameterised Constructor
BankAccount(String N,long A,String T,double B){
Name = N;
Acc_no = A;
Acc_type = T;
Acc_bal = B;
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
BankAccount ba2 = new BankAccount("Aravind",3092,"Savings",4000.00);

ba1.display();
ba1.deposit(1);
ba1.withdraw(10);


ba2.display();
ba2.deposit(2);
ba2.withdraw(20);

}
}
