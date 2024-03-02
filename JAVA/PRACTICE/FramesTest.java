import java.awt.*;
class Main extends Frame{
   
    public static void main (String[] args) {
        Frame f = new Frame("TEST");
        f.setVisible(true);
        f.setLocation(200, 200);
        Label l = new Label();
        l.setText("sdfgdfgdgf");
        f.setSize(200, 200);
        f.add(l);
    }
}