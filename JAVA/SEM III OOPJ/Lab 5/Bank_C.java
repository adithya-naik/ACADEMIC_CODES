//LAB 5 
//C)
//BankAccount Class --> to define Instance variables,Instance Methods and count //variable
class BankAccount{

//Instance Variables
String Name;
long Acc_no;
String Acc_type;
double Acc_bal;
static int count;

//Default Constructor
BankAccount(){
Name = "J.Adithya Naik";
Acc_no = 3091;
Acc_type = "Savings";
Acc_bal = 3000.00;
count++;
}

//Parameterised Constructor
BankAccount(String N,long A,String T,double B){
Name = N;
Acc_no = A;
Acc_type = T;
Acc_bal = B;
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

//ExecuteAccount Class --> to define Main Method and using arrays

class ExecuteAccount{
public static void main(String args[]){
BankAccount []ba1 = new BankAccount[5];
ba1[0]=new BankAccount("Aravind",10654789,"Savings",1000.00);
ba1[1]=new BankAccount("Ramesh",2043534,"Savings",20000.0);
ba1[2]=new BankAccount("Vimala",30,"Savings",30000.0);
ba1[3]=new BankAccount("Upendhar",40,"Savings",40000.0);
ba1[4]=new BankAccount("Sikindhar",50,"Savings",10000.0);
BankAccount ba2 = new BankAccount();
ba2.display();
for(int i=0;i<ba1.length;i++){
ba1[i].display();
}
//ba1.deposit(1);
//ba1.withdraw(10);


//ba2.display();
//ba2.deposit(2);
//ba2.withdraw(20);


System.out.println("\n");
System.out.println("Number of Account holders : "+BankAccount.count);

}
}
