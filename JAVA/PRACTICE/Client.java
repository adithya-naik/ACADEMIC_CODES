public class Client {
public static void main( String args [] ) {
    String filename = "test.txt";
    String filename2 = "test2.txt";

    Reader reader = new Reader( filename ) ; 
    Writer writer = new Writer( filename2 ) ;

        reader.start();
        writer.start();
  }
} 
 class Writer extends Thread{
public String filename; 
public Writer( String filename ) {
    this.filename = filename; 
}
public void run() { 
        System.out.println( "writing to a file:" + this.filename );  
 }
}
 class Reader extends Thread{
public String filename; 
public Reader( String filename ) {
    this.filename = filename; 
}
public void run() { 
        System.out.println( "reading a file:" + this.filename );
    } 

}