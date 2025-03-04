import java.awt.*;
class awt3 extends Frame
{
private Button b1,b2,b3,b4,b5,b6;
awt3()
{
b1=new Button("One");
b2=new Button("Two");
b3=new Button("Three");
b4=new Button("Four");
b5=new Button("Five");
b6=new Button("Six");

setLayout(new GridLayout(2,3));
add(b1);
add(b2);
add(b3);
add(b4);
add(b5);
add(b6);
setLocation(200,100);
setSize(600,200);
setVisible(true);
}
}
class awt3psp
{
public static void main(String gg[])
{
awt3 a=new awt3();
}
}
