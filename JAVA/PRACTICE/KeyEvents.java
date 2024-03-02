import java.awt.*;
import java.awt.event.*;

class KeyEvents extends Frame {
    public KeyEvents() {
        addKeyListener(new ExKey());
        setSize(100, 100);
        setVisible(true);
    }

    public static void main(String args[]) {
        new KeyEvents();
    }
}

class ExKey implements KeyListener {
    public void keyTyped(KeyEvent me) {
        String str = "";
        str += me.getKeyChar();
        System.out.println(str);
    }

    public void keyPressed(KeyEvent me) {
        System.out.println("Down");
    }

    public void keyReleased(KeyEvent me) {
        System.out.println("Up");
    }
}