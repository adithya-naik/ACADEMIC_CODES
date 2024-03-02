class A{
	void m1(){
	System.out.println("METHOD M1 IN CLASS A ");	
	}
}

class B extends A{
	void m1(){
	System.out.println("METHOD M1 IN CLASS B(Over ridden)");
	}
}

class Overridding{
public static void main(String args[]){
  B b = new B();
  b.m1();
}
}