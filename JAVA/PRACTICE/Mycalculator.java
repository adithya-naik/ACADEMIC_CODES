import java.awt.*;
import java.awt.event.*;

class Mycalculator extends Frame implements ActionListener {
	Label l1, l2, l3;
	TextField t1, t2, t3;
	Button a, s;

	public Mycalculator() {
		l1 = new Label("Num 1 : ");
		t1 = new TextField(10);
		l2 = new Label("Num 2 : ");
		t2 = new TextField(10);
		l3 = new Label("Result : ");
		t3 = new TextField(10);
		a = new Button("ADD");
		s = new Button("SUBSTRACT");
		add(l1);
		add(t1);
		add(l2);
		add(t2);
		add(l3);
		add(t3);
		add(a);
		add(s);
		a.addActionListener(this);
		s.addActionListener(this);
		setLayout(new FlowLayout(FlowLayout.CENTER, 10, 5));
		setSize(500, 500);
		setVisible(true);
	}

	public void actionPerformed(ActionEvent ae) {
		int temp;
		if (ae.getActionCommand().equals("ADD")) {
			temp = Integer.parseInt(t1.getText()) + Integer.parseInt(t2.getText());
			t3.setText(temp + " ");
		} else {
			temp = Integer.parseInt(t1.getText()) - Integer.parseInt(t2.getText());
			t3.setText(temp + " ");
		}
	}

	public static void main(String args[]) {
		new Mycalculator();
	}
}
