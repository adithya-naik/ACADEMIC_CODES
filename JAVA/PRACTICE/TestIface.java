public interface Callback {
    void callback(int param);
}

class Client implements Callback {
// Implement Callback's interface
public void callback(int p) {
System.out.println("callback called with " + p);
}
}

public class TestIface {
	public static void main(String args[]) {
		// Callback c = new Client();
		//  c.callback(42);
		Callback cb;
		Client c=new Client();
		cb=c;
		cb.callback(42);
		   }
		}
