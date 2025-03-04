import java.awt.*;
class awt4 extends Frame
{
private Button b1,b2,b3,b4,b5;
awt4()
{
b1=new Button("One");
b2=new Button("Two");
b3=new Button("Three");
b4=new Button("Four");
b5=new Button("Five");

setLayout(new BorderLayout());		//By Default Layout
add(b1,BorderLayout.CENTER);		//By Default Center
add(b2,BorderLayout.WEST);
add(b3,BorderLayout.EAST);
add(b4,BorderLayout.NORTH);
add(b5,BorderLayout.SOUTH);
setLocation(200,100);
setSize(600,200);
setVisible(true);
}
}
class awt4psp
{
public static void main(String gg[])
{
awt4 a=new awt4();
}
}
