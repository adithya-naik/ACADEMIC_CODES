import javax.swing.*;
import java.awt.*;

public class jfarame_demo {
    public static void main(String[] args) {
        JFrame j = new JFrame("JFRAME1");
        j.setVisible(true);
        j.setSize(300,300);
        j.setLocation(100,100);

        JFrame j1 = new JFrame("JFRAME2");
        j1.setVisible(true);
        j1.setSize(300,300);
        j1.setLocation(300,100);
         
        Frame f = new Frame("FRAME");
         f.setVisible(true);
        f.setSize(300,300);
          j.setLocation(500,500);
    }
}
