
Here's the converted code in Java:
```java
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    String str = "Good Morning"; // Create a string variable equal to any text value
    String cstr = " to all"; // Append the string variable with another string literal
    String cstr2 = " !!!"; // Show the contents of the variable after the append operation
    int x = 0;

    if (str.length() > str.length() + cstr.length() + cstr2.length()) {
      /* 1st method */
      str += cstr;

      /* 2nd method */
      x = str.length();
      str += String.format("%s", cstr2);

      System.out.println(str); // Print the result
    }
  }
}
```
Note that in Java, we use the `+=` operator to concatenate strings instead of using the `strcat` function from C. We also use the `length()` method to get the length of a string in Java, rather than using the `strlen` function from C. Additionally, we use the `String.format` method to format a string with placeholders for its arguments, which is more idiomatic and efficient than using `sprintf`.
