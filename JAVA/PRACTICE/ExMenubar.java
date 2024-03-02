import java.awt.*;
public class ExMenubar extends Frame{	
	public ExMenubar(){
		super("Menubar test");
		MenuBar mbar = new MenuBar();
		setMenuBar(mbar);

		Menu file = new Menu("File");
		MenuItem item1, item2, item3, item4, item5;
		file.add(item1 = new MenuItem("New..."));
		file.add(item2 = new MenuItem("Open..."));
		file.add(item3 = new MenuItem("Close"));
		file.add(item4 = new MenuItem("Save"));
		file.add(item5 = new MenuItem("Quit..."));
		mbar.add(file); 

		setVisible(true);
		setSize(300,300);
		}
	public static void main(String args[]){
	new ExMenubar();
	}
}
		
