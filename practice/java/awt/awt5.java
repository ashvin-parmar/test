import java.awt.*;
class awt5 extends Frame
{
private Label title;
private Label l1,l2,l3,l4,l5,l6;
private TextField t1,t2;
private Choice c1;
private List lst1;
private Checkbox isIndian;
private Checkbox male,female;
private CheckboxGroup gender;
private Button save,cancel;
awt5()
{
title=new Label("Student (Add Module)");
Panel p1=new Panel(new GridLayout(1,3));
p1.add(new Label("        "));
p1.add(title);
p1.add(new Label("        "));

l1=new Label("Name");
t1=new TextField(20);
l2=new Label("Roll Number");
t2=new TextField(10);

l3=new Label("City");
c1=new Choice();
c1.add("Ujjain");
c1.add("Indore");
c1.add("Goa");

l4=new Label("Hobbies");
lst1=new List(3,true);
lst1.add("Swimming");
lst1.add("Dancing");
lst1.add("Gaming");
lst1.add("Eating");
lst1.add("Reading");
lst1.add("Writing");

l5=new Label("Gender");
gender=new CheckboxGroup();

male=new Checkbox("Male",gender,true);
female=new Checkbox("Female",gender,false);
Panel p2=new Panel(new GridLayout(1,3));
p2.add(male);
p2.add(female);

l6=new Label("Is Indian");
isIndian=new Checkbox();

save=new Button("Save");
cancel=new Button("Cancel");
Panel p3=new Panel(new GridLayout(2,5));
p3.add(new Label("        "));
p3.add(save);
p3.add(new Label("        "));
p3.add(cancel);
p3.add(new Label("        "));
for(int i=0;i<5;i++) p3.add(new Label("        "));

Panel p4=new Panel(new GridLayout(6,2));
p4.add(l1);
p4.add(t1);
p4.add(l2);
p4.add(t2);
p4.add(l3);
p4.add(c1);
p4.add(l4);
p4.add(lst1);
p4.add(l5);
p4.add(p2);
p4.add(l6);
p4.add(isIndian);

setLayout(new BorderLayout());
add(p4,BorderLayout.CENTER);
add(p1,BorderLayout.NORTH);
add(p3,BorderLayout.SOUTH);
add(new Label("         "),BorderLayout.WEST);
add(new Label("         "),BorderLayout.EAST);

setLocation(100,100);
setSize(300,300);
setVisible(true);
}
}
class awt5psp
{
public static void main(String gg[])
{
awt5 a=new awt5();
}
}
