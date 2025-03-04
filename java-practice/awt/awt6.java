import java.awt.*;
import java.awt.event.*;

class awt6 extends Frame implements ItemListener
{
private Checkbox b1,b2;
private TextArea ta;
awt6()
{
b1=new Checkbox("One");
b2=new Checkbox("Two");

ta=new TextArea();
updateStatus();

b1.addItemListener(this);
b2.addItemListener(this);

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
class awt6psp
{
public static void main(String gg[])
{
awt6 a=new awt6();
}
}
