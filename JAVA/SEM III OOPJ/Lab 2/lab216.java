class VendingMachine4{
public static void main(String[] args){
int token=30;
char Softdrink='S';
if(token==30){
	if(Softdrink=='S'){
	System.out.println("Collect Sprite");
	}else if(Softdrink=='F'){
	System.out.println("Collect Fanta");
	}
	else{
	System.out.println("Invalid Optin");
	}
}
else{
	System.out.println("Invalid Token");
	}
}
}