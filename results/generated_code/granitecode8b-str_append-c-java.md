Here's the Java code that meets your requirements:
```java
public class Main {
 public static void main(String[] args) {
 String str = "Good Morning";
 String cstr = " to all";
 String cstr2 = " !!!";
 
 if (str.length() + cstr.length() + cstr2.length() < 24) {
 // 1st method
 str += cstr;
 
 // 2nd method
 int x = str.length();
 str = str.substring(0, x) + cstr2;
 
 System.out.println(str);
 }
 }
}
```
Note that in Java, strings are immutable, so you can't modify an existing string variable like `str` directly. Instead, you have to create a new string and assign it to the variable. Also, I added some line breaks and indentation for better readability.

