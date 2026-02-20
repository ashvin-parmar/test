//Technique 2 for windowListener methods
//WORST TECHNIQUE: Reason: There are a different class created for such functionality, but what if before windowClose class, we want to save the nessasary data's of awt8 class, we cannot use those data from outside class. 
//Technique 1 is better but technique 3 will be best of all: Next awt9

import java.awt.*;
import java.awt.event.*;

class WindowClose extends WindowAdapter
{
public void windowClosing(WindowEvent event)
{
System.exit(0);
}
}

class awt8 extends Frame implements ItemListener
{
private Checkbox b1,b2;
private TextArea ta;
private WindowClose windowClose;
awt8()
{
b1=new Checkbox("One");
b2=new Checkbox("Two");

ta=new TextArea();
updateStatus();

b1.addItemListener(this);
b2.addItemListener(this);
windowClose=new WindowClose();		//If Object not created and passed 
					//Null passed and its not work
addWindowListener(windowClose);

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
}
class awt8psp
{
public static void main(String gg[])
{
awt8 a=new awt8();
}
}
