import java.sql.*;

class psp1
{
public static void main(String gg[])
{
try
{
Class.forName("com.mysql.cj.jdbc.Driver");
Connection c=DriverManager.getConnection("jdbc:mysql://localhost:3306/abcd","abcduser","abcd#User1");
Statement s=c.createStatement();
s.executeUpdate("insert into designation (title) values('Minister')");
s.close();
c.close();
System.out.println("Minister designation added");
}catch(Exception e)
{
System.out.println(e);
}
}
}

