//Technique 3 for windowListener methods	[Using Functional Interface]
//Lambda Expression + Abstract Methods Defining

import java.awt.*;
import java.awt.event.*;
class awt9 extends Frame
{
private Checkbox b1,b2;
private TextArea ta;
awt9()
{
b1=new Checkbox("One");
b2=new Checkbox("Two");

ta=new TextArea();
updateStatus();

b1.addItemListener(new ItemListener(){			//No Adapter for ItemListerner
public void itemStateChanged(ItemEvent event)
{
updateStatus();
}
});
b2.addItemListener(new ItemListener(){
public void itemStateChanged(ItemEvent event)
{
updateStatus();
}
});

addWindowListener(new WindowAdapter(){		//Adapter availabel for WindowListener because too many methods
public void windowClosing(WindowEvent event)
{
System.exit(0);
}
});

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
}
class awt9psp
{
public static void main(String gg[])
{
awt9 a=new awt9();
}
}
