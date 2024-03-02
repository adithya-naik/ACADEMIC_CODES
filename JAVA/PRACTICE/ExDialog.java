import java.awt.*;

public class ExDialog extends Frame{	
	public ExDialog(){
		super("Dialog test");
		
		Dialog d = new Dialog(this,"Dialog",false);		
		
		d.add("Center",new Label("Dialog Box"));
		d.add("South",new Button("OK"));
		d.pack();
		d.setVisible(true);

		setVisible(true);
	setSize(300,300);
	}
public static void main(String args[]){
new ExDialog();
}
}
 
