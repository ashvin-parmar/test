import java.io.*;
class FileReaderExample
{

public static void main(String args[])
{

try
{
FileReader fr=new FileReader("abc.txt");
BufferedReader br=new BufferedReader(fr);
String s;
while((s=br.readLine())!=null)
{
System.out.println(s);
}
fr.close();

}catch(Exception exception)
{
System.out.println(exception.getMessage());
}
} 
}
