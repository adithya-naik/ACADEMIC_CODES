class Usage_try_catch {
    public static void main(String args[]) {
        
        try { // monitor a block of code.
           int d = 0;
           int a = 42 / d;
            System.out.println("This will not be printed."+a);
        } catch (ArithmeticException e) { // catch divide-by-zero error
            System.out.println("Division by zero.");
        }
        System.out.println("After catch statement.");
    }
}