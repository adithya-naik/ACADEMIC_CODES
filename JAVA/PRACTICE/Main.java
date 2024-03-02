import java.io.*;

// A class that implements Runnable to read a line from a file
class ReadLine implements Runnable {
  // A field to store the file name
  private String fileName;
  // A constructor to initialize the file name
  public ReadLine(String fileName) {
    this.fileName = fileName;
  }
  // The run() method that is executed by the thread
  public void run() {
    // Open the file for reading
    try (BufferedReader br = new BufferedReader(new FileReader(fileName))) {
      // Read the first line
      String line = br.readLine();
      // Print the line
      System.out.println("Read line: " + line);
    } catch (IOException e) {
      // Handle the exception
      e.printStackTrace();
    }
  }
}

// A class that implements Runnable to write a line to a file
class WriteLine implements Runnable {
  // A field to store the file name
  private String fileName;
  // A constructor to initialize the file name
  public WriteLine(String fileName) {
    this.fileName = fileName;
  }
  // The run() method that is executed by the thread
  public void run() {
    // Open the file for writing
    try (BufferedWriter bw = new BufferedWriter(new FileWriter(fileName))) {
      // Write a line
      bw.write("Hello, world!");
      // Print a message
      System.out.println("Wrote line to " + fileName);
    } catch (IOException e) {
      // Handle the exception
      e.printStackTrace();
    }
  }
}

// The main class
public class Main {
  // The main method
  public static void main(String[] args) {
    // Create two objects of ReadLine and WriteLine classes
    ReadLine r1 = new ReadLine("input.txt");
    WriteLine w1 = new WriteLine("output.txt");
    // Create two threads
    Thread t1 = new Thread(r1);
    Thread t2 = new Thread(w1);
    // Start the threads
    t1.start();
    t2.start();
    // Wait for the threads to finish
    try {
      t1.join();
      t2.join();
    } catch (InterruptedException e) {
      // Handle the exception
      e.printStackTrace();
    }
  }
}
