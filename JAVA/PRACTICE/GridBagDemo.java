
// GridBagLayout demo
import java.awt.*;

public class GridBagDemo extends Frame {
    public GridBagDemo() {

        GridBagLayout layout = new GridBagLayout();
        GridBagConstraints constraints = new GridBagConstraints();
        setLayout(layout);

        TextArea ta = new TextArea("welcome", 3, 5);
        constraints.gridx = 0;
        constraints.gridy = 0;
        constraints.gridwidth = 1;
        constraints.gridheight = 3;
        layout.setConstraints(ta, constraints);
        add(ta);

        Button b1 = new Button("button1");
       // constraints.fill = GridBagConstraints.BOTH;
        constraints.gridx = 1;
        constraints.gridy = 0;
        constraints.ipadx = 15;
        constraints.ipady = 25;
        constraints.gridwidth = 2;
        constraints.gridheight = 1;
        layout.setConstraints(b1, constraints);
        add(b1);

        setVisible(true);
        setSize(600, 600);
    }

    public static void main(String arg[]) {
        new GridBagDemo();
    }

}
