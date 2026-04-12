## Parser for everything
A ParseFunction class created just to parse any string format data (parameterValue)to your demanded Type of Class<?> format(parameterType). It's additionally works to parse any JSON format string to specific provided Object of specific class, provided the object should rely with the requirements to parse from JSON provided.
### Dependencies
There are parsing depedencies required for JSON format. For this, i have used Gson Parser provided by google. It will simply parse your provided jsonString to the class you have provided to its method fromJson(jsonString) or toJson(jsonString,Class<?>).
Required package to import is ->
** import com.google.gson.*; **

### Feature
1: We have used Generics in java, provides a facility that allows types (classes and interfaces) to be parameters when defining other classes, interfaces, and methods. Introduced in Java 5, they provide a way to reuse the same code with different inputs while maintaining type safety.
**[NOT USED ANYMORE]** You have to type cast the return value from the parseTo function, to the specifically required type. If it's primitive type then use their wrapper classes(Boxer class) to type cast to them. ** Reason: It return Object type of data, which need to convert them to your required once. ** 

### Why i have build this? 
I have been working on building a framework, where i used to implement some feature by using reflection API to invoke method. In Reflection, invoke method required array of Object as parameter of those function. This parseTo method will help me to implement that feature to it. 


