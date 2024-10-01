Here's the Java code that performs the same task as the C code:
```java
public class Main {
 public static void main(String[] args) {
 String str = "my String";
 String cstr = "Changed ";
 
 // Allocate a new string object to store the result
 StringBuilder result = new StringBuilder();
 
 // Prepend the string literal with the original string variable
 result.append(cstr);
 result.append(str);
 
 System.out.println(result.toString());
 }
}
``` 
In this Java code, we first create a string variable `str` and assign it the value "my String". We then create another string variable `cstr` and assign it the value "Changed ".
We use a `StringBuilder` object to store the result of prepending `cstr` to `str`. This is more efficient than using the `+` operator for concatenation in Java.
Finally, we print the resulting string by calling the `toString()` method on the `StringBuilder` object.

