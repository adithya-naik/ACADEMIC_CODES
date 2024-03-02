import java.awt.*;

class framecomponents extends Frame {

    public framecomponents() {
        super("Frame Name");
        setLayout(new FlowLayout()); // flowlayout

        Choice v1 = new Choice(); // choice
        v1.setBackground(Color.red);

        TextField Choice1 = new TextField("Frames Component: TEXT FIELD ", 115); // Text Field
        Choice1.setBackground(Color.pink);

        TextArea ch = new TextArea(10, 30); // TextArea
        ch.setBackground(Color.orange);

        List l1 = new List(3, true); // List
        l1.setBackground(Color.green);

        Button b1 = new Button("ok"); // Buttons
        Button b2 = new Button("Exit");

        Checkbox c1 = new Checkbox("hi");
        Checkbox c2 = new Checkbox("hello"); // CheckBoxes
        Checkbox c3 = new Checkbox("good");

        CheckboxGroup cbg = new CheckboxGroup();
        Checkbox x1 = new Checkbox("Java", cbg, true); // Radio Buttons or CheckBoxGroupes
        Checkbox x2 = new Checkbox("Python", cbg, true);
        Checkbox x3 = new Checkbox("HTML", cbg, false);

        MenuBar mbar = new MenuBar(); // Menu bar
        setMenuBar(mbar);
        // mbar.setBackground(Color.red);

        Menu file = new Menu("File"); // Menus
        Menu ed = new Menu("Edit");
        Menu submenu = new Menu("Sub Menu"); // Sub Menu
        MenuItem f1, f2, f3, f4, e1, e2, e3, e4, e5;
        file.add(f1 = new MenuItem("Open"));
        file.add(f2 = new MenuItem("Close"));
        file.add(f2 = new MenuItem("Save As.."));
        file.add(f2 = new MenuItem("Find.."));
        file.add(f2 = new MenuItem("Print"));
        file.add(f2 = new MenuItem("Exit"));
        ed.add(f3 = new MenuItem("Undo.."));
        ed.add(f4 = new MenuItem("Paste.."));
        ed.add(e1 = new MenuItem("Copy.."));
        ed.add(e2 = new MenuItem("Cut.."));
        e3 = new MenuItem("Zoom In..");
        e4 = new MenuItem("Zoom Out..");
        e5 = new MenuItem("Status bar..");

        Dialog d = new Dialog(this, "Dialog", true);
        d.add("Center", new Label("Dialog Box")); // Dialog Box
        d.add("South", new Button("OK"));
        d.pack();
        d.setVisible(true);

        Scrollbar s1 = new Scrollbar(Scrollbar.VERTICAL);
        Scrollbar s2 = new Scrollbar(Scrollbar.HORIZONTAL, 100, 60, 300, 300); // Scrollbars
        s1.setBackground(Color.pink);
        s2.setBackground(Color.pink);
        add(s1);
        add(s2);

        ScrollPane p = new ScrollPane();
        p.setSize(200, 200);
        p.setBackground(Color.red);
        p.setLocation(200, 200);
        Panel pan1 = new Panel();
        pan1.setBackground(Color.blue);
        TextArea t1 = new TextArea(40, 20);
        pan1.add(t1);
        p.add(pan1);
        add(p);

        Canvas can1 = new Canvas();
        can1.setSize(200, 100);
        can1.setBackground(Color.blue);
        add(can1);

        mbar.add(file);
        ed.add(submenu);
        submenu.add(e3);
        submenu.add(e4);
        submenu.add(e5);
        mbar.add(ed);

        l1.add("c++");
        l1.add("python");
        l1.add("c");
        l1.add("html");
        l1.add("java");
        v1.add("java");
        v1.add("python");
        v1.add("c");
        v1.add("c++");

        add(x1);
        add(x2);
        add(x3);
        add(b1);
        add(b2);
        add(ch);
        add(c1);
        add(c2);
        add(c3);
        add(Choice1);
        add(v1);
        add(l1);

        setBackground(Color.yellow);

        setVisible(true);

        setSize(1000, 1000);
    }

    public static void main(String args[]) {
        new framecomponents();

    }
}