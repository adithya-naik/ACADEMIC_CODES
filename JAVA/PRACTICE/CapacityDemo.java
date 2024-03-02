class CapacityDemo {
    public static void main(String args[])     {
         StringBuffer sb1 = new StringBuffer(2);
         System.out.println("Default Capacity : "+sb1.capacity());
         System.out.println("Default Length : "+sb1.length());
         sb1.setLength(10);
         System.out.println("Length   : "+sb1.length());
      }
  }
