import java.awt.*;
public class BorderLayoutDemo extends Frame {
public BorderLayoutDemo() {
setLayout(new BorderLayout());
add(new Button("North"),BorderLayout.NORTH);
add(new Button("South"),BorderLayout.SOUTH);
add(new Button("East"), BorderLayout.EAST);
add(new Button("west"), BorderLayout.WEST);
add(new Button("Center"), BorderLayout.CENTER);

setVisible(true);
setSize(300,300);
}
public static void main(String args[]){
new BorderLayoutDemo();
}
}

