import java.awt.*;
class awt2 extends Frame
{
private Label l1,l2,l3,l4,l5,l6;
private TextField t1,t2;
private Choice c1;
private List lst1;
private Checkbox isIndian;
private Checkbox male,female;
private CheckboxGroup gender;
private Button save,cancel;
awt2()
{
setLayout(new FlowLayout());

l1=new Label("Name");
t1=new TextField(20);
add(l1);
add(t1);

l2=new Label("Roll Number");
t2=new TextField(10);
add(l2);
add(t2);

l3=new Label("City");
c1=new Choice();
c1.add("Ujjain");
c1.add("Indore");
c1.add("Goa");
add(l3);
add(c1);

l4=new Label("Hobbies");
lst1=new List(3,true);
lst1.add("Swimming");
lst1.add("Dancing");
lst1.add("Gaming");
lst1.add("Eating");
lst1.add("Reading");
lst1.add("Writing");
add(l4);
add(lst1);

l5=new Label("Gender");
gender=new CheckboxGroup();

male=new Checkbox("Male",gender,true);
female=new Checkbox("Female",gender,false);
add(l5);
add(male);
add(female);

l6=new Label("Is Indian");
isIndian=new Checkbox();
add(l6);
add(isIndian);

save=new Button("Save");
add(save);
cancel=new Button("Cancel");
add(cancel);

setLocation(100,100);
setSize(400,400);
setVisible(true);
}
}
class awt2psp
{
public static void main(String gg[])
{
awt2 a=new awt2();
}
}
