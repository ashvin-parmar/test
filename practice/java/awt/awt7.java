import java.awt.*;
import java.awt.event.*;

class awt7 extends Frame implements ItemListener, WindowListener
{
private Checkbox b1,b2;
private TextArea ta;
awt7()
{
b1=new Checkbox("One");
b2=new Checkbox("Two");

ta=new TextArea();
updateStatus();

b1.addItemListener(this);
b2.addItemListener(this);
addWindowListener(this);

setLayout(new FlowLayout());
add(b1);
add(b2);
add(ta);

setLocation(200,100);
setSize(500,400);
setVisible(true);
}
private void updateStatus()
{
ta.setText("");
if(b1.getState()) ta.append("One Checked"+"\n");
else ta.append("One Unchecked"+"\n");
if(b2.getState()) ta.append("Two Checked"+"\n");
else ta.append("Two Unchecked"+"\n");
}
public void itemStateChanged(ItemEvent event)
{
updateStatus();
}
 public  void windowOpened(java.awt.event.WindowEvent event)
{
//Respective Functionality
}
public  void windowClosing(java.awt.event.WindowEvent event)
{
//Respective Functionality
System.exit(0);
}
  public  void windowClosed(java.awt.event.WindowEvent event)
{
//Respective Functionality
}
  public  void windowIconified(java.awt.event.WindowEvent event)
{
//Respective Functionality
}
  public  void windowDeiconified(java.awt.event.WindowEvent event)
{
//Respective Functionality
}
  public  void windowActivated(java.awt.event.WindowEvent event)
{
//Respective Functionality
}
  public  void windowDeactivated(java.awt.event.WindowEvent event)
{
//Respective Functionality
}
}
class awt7psp
{
public static void main(String gg[])
{
awt7 a=new awt7();
}
}
