import java.awt.*;

public class FlowLayoutDemo extends Frame {
    Button English, French, Greek, Japanese, German, Spanish, Arabic, chinese, Russian;

    public FlowLayoutDemo() {
        // setLayout(new FlowLayout(FlowLayout.LEFT));
        // setLayout(new FlowLayout());
        setLayout(new FlowLayout(FlowLayout.RIGHT, 20, 20));
        English = new Button("English");
        French = new Button("French");
        Greek = new Button("Greek");
        Japanese = new Button("Japanese");
        German = new Button("German");
        Spanish = new Button("Spanish");
        Arabic = new Button("Arabic");
        chinese = new Button("chinese");
        Russian = new Button("Russian");
        add(English);
        add(French);
        add(Greek);
        add(Japanese);
        add(German);
        add(Spanish);
        add(Arabic);
        add(chinese);
        add(Russian);
        setVisible(true);
        setSize(200, 300);
    }

    public static void main(String args[]) {
        new FlowLayoutDemo();

    }
}
