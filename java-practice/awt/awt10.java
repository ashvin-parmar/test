import java.awt.*;
import java.awt.event.*;

class awt10 extends Frame implements MouseListener
{
private Button b1,b2;
private TextArea ta;
awt10()
{
b1=new Button("One");
b2=new Button("Two");
ta=new TextArea("");

setLayout(new FlowLayout());
add(b1);
add(b2);
add(ta);

b1.addMouseListener(this);
b2.addMouseListener(this);

addWindowListener(new WindowAdapter(){
public void windowClosing(WindowEvent event)
{
System.exit(0);
}
});
setLocation(200,100);
setSize(400,400);
setVisible(true);
}
  public  void mouseClicked(java.awt.event.MouseEvent event)
{
System.out.println("Mouse Clicked");
ta.setText("");
ta.append("Screen x: "+event.getXOnScreen()+" Screen y: "+event.getYOnScreen()+"\n");
ta.append("X: "+event.getX()+" Y: "+event.getY()+"\n");
}
  public  void mousePressed(java.awt.event.MouseEvent event)
{
System.out.println("Mouse pressed");
}
  public  void mouseReleased(java.awt.event.MouseEvent evemt)
{
System.out.println("Mouse Released");
}
  public  void mouseEntered(java.awt.event.MouseEvent event)
{
System.out.println("Mouse Entered");
}
  public  void mouseExited(java.awt.event.MouseEvent event)
{
System.out.println("Mouse exited");
}
}
class awt10psp
{
public static void main(String gg[])
{
awt10 a=new awt10();
}
}
