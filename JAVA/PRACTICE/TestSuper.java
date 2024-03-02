 class Box{
    Box(){
    System.out.println("inside default Constructor of Box");
    }
    Box(int a){
    System.out.println("inside parameterized Constructor of Box"+a);
    }
    }

    class BoxSmall extends Box{
    BoxSmall(int b){
    //super(b);
    System.out.println("inside parameterized Constructor of BoxSmall");
    }
    }
    
    class TestSuper{
    public static void main(String args[]){
    BoxSmall s1=new BoxSmall(20);
    }
    }
