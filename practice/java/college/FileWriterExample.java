import java.io.*;

class FileWriterExample
{
public static void main(String args[])
{
try
{
FileWriter fw=new FileWriter("abc.txt");



}catch(IOException e)
{
System.out.println(e.getMessage());
}
}
}
