import com.google.gson.*;

class Student implements java.io.Serializable
{
  public int rollNumber;
  public String name;
}
class ParseFunction
{
  public <T> T parseTo(Class<T> parameterType,String parameterValue)
  {
    return parseTo(parameterType,parameterValue,null);
  }
  public <T> T parseTo(Class<T> parameterType,String parameterValue,String convertFrom)
  {
    Object result;
    if(parameterType==null) return null;
    if(parameterValue==null) parameterValue="";
    //System.out.println("Type: "+parameterType+" value: "+parameterValue);
    result=null;
    if(parameterType.equals(Long.TYPE) || parameterType.equals(java.lang.Long.class))
    {
      try
      {
        result=Long.parseLong(parameterValue);
      }catch(NumberFormatException nfe)
      {
        result=(long)0;
      }
    }
    if(parameterType.equals(Integer.TYPE) || parameterType.equals(java.lang.Integer.class))
    {
      try
      {
        result=Integer.parseInt(parameterValue);
      }catch(NumberFormatException nfe)
      {
        result=(int)0;
      }
    }
    if(parameterType.equals(Short.TYPE) || parameterType.equals(java.lang.Short.class))
    {
      try
      {
        result=Short.parseShort(parameterValue);
      }catch(NumberFormatException nfe)
      {
        result=(short)0;
      }
    }
    if(parameterType.equals(Byte.TYPE) || parameterType.equals(java.lang.Byte.class))
    {
      try
      {
        result=Byte.parseByte(parameterValue);
      }catch(NumberFormatException nfe)
      {
        result=(byte)0;
      }
    }
    if(parameterType.equals(Double.TYPE) || parameterType.equals(java.lang.Double.class))
    {
      try
      {
        result=Double.parseDouble(parameterValue);
      }catch(NumberFormatException nfe)
      {
        result=(double)0.0;
      }
    }
    if(parameterType.equals(Float.TYPE) || parameterType.equals(java.lang.Float.class))
    {
      try
      {
        result=Float.parseFloat(parameterValue);
      }catch(NumberFormatException nfe)
      {
        result=(float)0.0;
      }
    }
    if(parameterType.equals(Boolean.TYPE) || parameterType.equals(java.lang.Boolean.class))
    {
      if(parameterValue.isBlank()==false) result=Boolean.parseBoolean(parameterValue);
      else result=(boolean)false;
    }
    if(parameterType.equals(Character.TYPE) || parameterType.equals(java.lang.Character.class))
    {
      if(parameterValue.isBlank()==false) result=parameterValue.charAt(0);
      else result=(char)' ';
    }
    if(parameterType.equals(java.lang.String.class))
    {
      result=parameterValue;
    }
    if(result==null)
    {
      if(convertFrom.equalsIgnoreCase("json"))
      {
        Gson gson=new Gson();
        try
        {
          result=gson.fromJson(parameterValue,parameterType);
        }catch(Exception exception)
        {
          result=null;
        }
      }
    }
    if(parameterType.isPrimitive()) return (T)result;
    else return parameterType.cast(result);
  }
  public static void main(String args[])
  {
    ParseFunction p=new ParseFunction();

    System.out.println("--------main testing---------");
    long longVal=p.parseTo(long.class,"234425243235");
    Integer intVal=p.parseTo(Integer.class,"132423");
    Short shortVal=p.parseTo(Short.class,"123");
    short shortVal1=p.parseTo(short.class,"2432");
    byte byteVal=p.parseTo(byte.class,"23");
    Double doubleVal=p.parseTo(Double.class,"1234213523.5234324");
    float floatVal=p.parseTo(float.class,"63.53");
    char charVal=p.parseTo(char.class,"Z");
    boolean booleanVal=p.parseTo(boolean.class,"true");
    String stringVal=p.parseTo(String.class,"Something");
    Student student=p.parseTo(Student.class,"{'name':'Ashvin','rollNumber':'1001'}","json");
    System.out.println("Testing on long: "+longVal);
    System.out.println("Testing on int: "+intVal);
    System.out.println("Testing on short:"+shortVal); 
    System.out.println("Testing on short1: "+shortVal1);
    System.out.println("Testing on byte: "+byteVal);
    System.out.println("Testing on double: "+doubleVal);
    System.out.println("Testing on float: "+floatVal); 
    System.out.println("Testing on char: "+charVal);
    System.out.println("Testing on boolean: "+booleanVal);
    System.out.println("Testing on string: "+stringVal);
    System.out.println("Testing on complex object [name]: "+student.name);


    System.out.println("-------Corner cases ---------");
    System.out.println("Passing null testing: "+p.parseTo(Integer.class,"null"));    //Invalid data passed, then default value of integer is set.
    System.out.println("Passing empty string: "+p.parseTo(double.class,""));
    //System.out.println("Passing null to parameterType: "+p.parseTo(null,null));      //This line to show that its framework user mistake, not the framework developer mistake. Return type is Object, cannot take in primitive if you are not sure about its primitive returning value. 
    System.out.println("Passing null to parameterType: "+p.parseTo(null,null));
  }
}

