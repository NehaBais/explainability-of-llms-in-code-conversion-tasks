The error occurred because Java does not have an `Arrays` class, as it is part of the Java Collections Framework. Instead, you need to import the `java.util.Arrays` package.

Here's the corrected code:

```java
import java.util.Arrays;

public class Main {
  public static void main(String[] args) {
    // Create a string variable equal to any text value.
    String s1 = "hello";

    // Create another string variable whose value is the original variable concatenated with another
    // string literal.
    String s2 = s1 + " world";

    // Print the content of the variables.
    System.out.println(s1);
    System.out.println(s2);

    // Create a list of strings and use ", ".join() to concatenate them.
    List<String> list = Arrays.asList(s1, "world", "mom");

    // Print the content of the variable.
    System.out.println(s3);
  }
}
```
