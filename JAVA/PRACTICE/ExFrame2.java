import javax.swing.*;
import javax.swing.JFrame;
import java.awt.*;
class MyFrame extends JFrame{
        MyFrame()	{            
            super("title of Frame");
            JLabel l1=new JLabel("FirstName");
            l1.setDisplayedMnemonic('F');
            add(l1);
            setLayout(new FlowLayout());
            setSize(300,200);
            setVisible(true);
            setDefaultCloseOperation(EXIT_ON_CLOSE);
        }
}
class ExFrame2{
    public static void main( String args[] )	{
         new MyFrame();
       }
}

