class A{
int a= 10;
A(int b){
System.out.println(b);
}
void m1(){
	System.out.println("METHOD M1 IN CLASS A ");	
	}
}

class B extends A{
int a = 20;
B(){
 super(3);
}
void m1(){

	super.m1();
	System.out.println("METHOD M1 IN CLASS B ");
System.out.println(a);
System.out.println(super.a);
}
}

class Super{
public static void main(String args[]){
  B b = new B();

  b.m1();

}
}