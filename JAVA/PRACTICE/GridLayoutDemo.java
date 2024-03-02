import java.awt.*;
public class GridLayoutDemo extends Frame  {
Button one, Two, Three,Four,Five,Six;
public GridLayoutDemo() {
//setLayout(new GridLayout(2,2));
//setLayout(new GridLayout());
setLayout(new GridLayout(2,3,5,2));
one= new Button("one");
Two= new Button("Two");
Three = new Button("Three");
Four = new Button("Four");
Five = new Button("Five");
Six = new Button("Six");
add(one);
add(Two);
add(Three);
add(Four);
add(Five);
add(Six);
setVisible(true);
setSize(300,300);
}
public static void main(String args[]){
new GridLayoutDemo();
}
}

