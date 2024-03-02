class Odd extends Thread {
    public void run() {
        System.out.println("\t\tOdd Thread is running");
        try {
            for (int i = 1; i <= 10; i = i + 2) {
                Thread.sleep(1000);
                System.out.println("\t\t" + i);
            }
        } catch (Exception e) {
            System.out.println(e);
        }
        System.out.println("\t\tOdd Thread is Exiting");
    }
}

public class EvenOddThread {
    public static void main(String args[]) {
        System.out.println("Even Thread is running");
        Odd o = new Odd();
        o.start();
        try {
            for (int i = 0; i <= 10; i = i + 2) {
                Thread.sleep(1000);
                System.out.println(i);
            }
        } catch (Exception e) {
            System.out.println(e);
        }
        System.out.println("Even Thread is Exiting");
    }
}