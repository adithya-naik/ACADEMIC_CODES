import java.awt.*;
import javax.swing.*;

public class CardLayoutDemo {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        Container c = frame.getContentPane();
        
        CardLayout card = new CardLayout();
        c.setLayout(card);

        Button b1 = new Button("Page 1");
        Button b2 = new Button("Page 2");
        Button b3 = new Button("Page 3");

        c.add(b1, "1");
        c.add(b2, "2");
        c.add(b3, "3");

        frame.setSize(400, 400);
        frame.setVisible(true);

        // card.next(c);
        // card.previous(c);
        // card.first(c);
        // card.last(c);
        // card.show(c,"3");
    }

}
