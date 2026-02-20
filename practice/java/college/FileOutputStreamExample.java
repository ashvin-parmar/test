import java.io.*;

class FileOutputStreamExample
{
public static void main(String gg[])
{
try
{
File file=new File("abc.txt");
FileOutputStream fos=new FileOutputStream(file);
String data="Java is purely object oriented programming language.";
byte[] bytes=data.getBytes();

for(int k=0;k<bytes.length;k++)
{
fos.write(bytes[k]);
fos.flush();
}
fos.close();


FileInputStream fis=new FileInputStream(file);
byte[] b=new byte[10];
int i=0;



}catch(FileNotFoundException fnfe)
{
System.out.println("Exception: "+fnfe);
}catch(IOException ioException)
{
System.out.println("Exception : "+ioException.getMessage());
}
}
}
