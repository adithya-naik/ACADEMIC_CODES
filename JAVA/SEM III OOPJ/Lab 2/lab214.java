class VendingMachine2{
public static void main(String[] args){
int token=30;
if(token==10){
System.out.println("Collect Chips");
}else if(token==20){
System.out.println("Collect Water Bottle");
}
else if(token==30){
System.out.println("Collect Soft Drink");
}
else{
System.out.println("Invalid Token");
}
}
}