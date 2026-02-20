import java.sql.*;

class psp2
{
public static void main(String gg[])
{
try
{
Class.forName("com.mysql.cj.jdbc.Driver");
Connection c=DriverManager.getConnection("jdbc:mysql://localhost:3306/abcd","abcduser","abcd#User1");
Statement s=c.createStatement();
s.executeUpdate("update designation set title='Prime Minister' where code=2");
s.close();
c.close();
System.out.println("Designation updated to 'Prime Minister'");
}catch(Exception e)
{
System.out.println(e);
}
}
}
